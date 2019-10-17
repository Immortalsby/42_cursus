/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshi <sby945913@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 23:38:57 by bshi              #+#    #+#             */
/*   Updated: 2019/10/17 19:59:57 by bshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static	int		pos_line_end(char *s)
{
	int	pos;

	pos = -1;
	while (s[++pos] != '\0')
		if (s[pos] == '\n')
			return (pos);
	return (-1);
}

static	int		if_line_end(char *str)
{
	while (*str != '\0')
		if (*str++ == '\n')
			return (1);
	return (0);
}

static	void	put_in_line(char **readed, char **line)
{
	int		pos;
	char	*tmp;
	char	*res;

	pos = pos_line_end(*readed);
	tmp = *readed;
	if (pos >= 0)
	{
		res = ft_substr(tmp, 0, pos);
		*readed = ft_substr(tmp, pos + 1, ft_strlen_sc(tmp, '\0'));
	}
	else
	{
		res = ft_substr(tmp, 0, ft_strlen_sc(tmp, '\n'));
		*readed = NULL;
	}
	free(tmp);
	*line = res;
}

int				get_next_line(int fd, char **line)
{
	static char		*readed[FD];
	char			buff[BUFFER_SIZE + 1];
	int				f_size;
	char			*ret;

	if (fd < 0 || fd >= FD || fd == 1 || fd == 2)
		return (-1);
	while ((f_size = read(fd, buff, BUFFER_SIZE)) > 0)
	{
		buff[f_size] = '\0';
		ret = ft_strjoin(readed[fd], buff);
		if (readed[fd])
			free(readed[fd]);
		readed[fd] = ret;
		if (if_line_end(readed[fd]))
			break ;
	}
	if (*readed[fd] == '\0' || !readed[fd])
		return (0);
	if (f_size < 0)
		return (-1);
	put_in_line(&readed[fd], line);
	return (1);
}
