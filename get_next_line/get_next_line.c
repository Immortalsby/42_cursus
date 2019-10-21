/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshi <sby945913@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 23:38:57 by bshi              #+#    #+#             */
/*   Updated: 2019/10/21 18:57:26 by bshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <string.h>
/*
** Code a optimiser, mais le but est de malloc assez place for line
*/

static int		expand(char **tmp, int *count, char **line, int i)
{
	count = count + 1;
	tmp[0][i] = '\0';
	ft_strcpy(tmp[1], *line);
	free(*line);
	if ((*line = ft_strnew((*count + 1) * BUFFER_SIZE)) == NULL)
		return (-1);
	ft_strcpy(*line, tmp[1]);
	free(tmp[1]);
	if ((tmp[1] = ft_strnew((*count + 1) * BUFFER_SIZE)) == NULL)
		return (-1);
	ft_strcat(*line, tmp[0]);
	return (0);
}

/*
** check si cest la fin (\n)
*/

static int		if_end(char **line, char *readed, char **fr)
{
	char		*tmp;
	int			index[2];

	index[0] = -1;
	if ((tmp = (char *)malloc(sizeof(char) * BUFFER_SIZE + 1)) == NULL)
		return (-1);
	while (readed[++index[0]] != '\n' && readed[index[0]] != '\0')
		tmp[index[0]] = readed[index[0]];
	tmp[index[0]] = '\0';
	ft_strcpy(*line, tmp);
	free(tmp);
	tmp = NULL;
	if (readed[index[0]] == '\0')
		ft_bzero(readed, BUFFER_SIZE);
	if (readed[index[0]] == '\n')
	{
		index[1] = 0;
		while (readed[index[0]++] != '\0')
			readed[index[1]++] = readed[index[0]];
		if (fr)
		{
			free(fr[2]);
			free(fr);
		}
		return (1);
	}
	return (0);
}

/*
** free tmp et voir si tout le fichier est fini de lire
*/

static int		del_mem(int i, char **fr, char *readed, char **line)
{
	int		j;

	j = 0;
	free(fr[0]);
	free(fr[1]);
	if (i == -1)
		return (-1);
	else if (fr[2][i] == '\n')
	{
		while (fr[2][++i])
			readed[j++] = fr[2][i];
		readed[j] = '\0';
		free(fr[2]);
		free(fr);
		return (1);
	}
	else if (readed[0] != '\0' && i == 0)
		if (if_end(line, readed, fr))
			return (1);
	free(fr[2]);
	free(fr);
	if (*line[0] == '\0' && readed[0] == '\0')
	{
		return (0);
	}
	else 
		return (1);
}

/*
** check tout!! et malloc pour tmp et line
*/

static int		checker(char **tmp, char **line, char **readed, int fd)
{
	if (fd <= -1 || fd >= FD || !line ||
			(tmp == NULL)
			|| (*line = ft_strnew(BUFFER_SIZE)) == NULL)
		return (-1);
	if (*readed)
	{
		if (if_end(line, *readed, NULL))
		{
			free(tmp);
			return (1);
		}
	}
	else
	{
		if ((*readed = ft_strnew(BUFFER_SIZE)) == NULL)
		{
			free(tmp);
			return (-1);
		}
	}
	return (0);
}

int				get_next_line(int fd, char **line)
{
	char				**tmp;
	static	char		*readed[FD];
	int					i;
	int					count;

	tmp = (char **)malloc(sizeof(char *) * 3);
	if ((i = checker(tmp, line, &readed[fd], fd)) != 0)
		return (i);
	i = -1;
	while (++i < 3)
		if ((tmp[i] = (char *)malloc((sizeof(char) * BUFFER_SIZE + 1))) == NULL)
			return (-1);
	count = 0;
	while ((i = read(fd, tmp[2], BUFFER_SIZE)) > 0)
	{
		tmp[2][i] = '\0';
		i = -1;
		while (tmp[2][++i] && tmp[2][i] != '\n')
			tmp[0][i] = tmp[2][i];
		if ((expand(tmp, &count, line, i)) == -1)
			return (-1);
		if (tmp[2][i] == '\n')
			break ;
	}
	return (del_mem(i, tmp, readed[fd], line));
}
