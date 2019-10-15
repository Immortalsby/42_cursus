/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshi <sby945913@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 23:38:57 by bshi              #+#    #+#             */
/*   Updated: 2019/10/15 11:23:33 by bshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static	void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	value;
	size_t			size;

	if (str == NULL)
		return (NULL);
	value = (unsigned char)c;
	size = 0;
	while (size < n)
	{
		((char *)str)[size] = value;
		size++;
	}
	return (str);
}

/*
** ||检查readed有无\n||
** 如果没有就说明不合格
** 如果有的话就把它copy到**line
** 再把tmp里面的下一个copy回readed
** 还会再用到
*/
static	int	check_if_line(char **readed, char **line)
{
	char			*tmp;
	char			*chr;

	chr = *readed;
	while (*chr != '\n')
		if (!*chr++)
			return (0);
	tmp = &*chr;
	*tmp = '\0';
	*line = ft_strdup(*readed);
	*readed = ft_strdup(tmp + 1);
	return (1);
}

/*
** ||持续读fd，当read>0时||
** 如果读到内容，把内容写入tmp
** 如果是空的，就把hot值付给readed
** 如果有 \n 就break
** 如果没错的话，ret就等于1
** 有错的话返回-1
*/
static	int	read_fd(int fd, char *hot, char **readed, char **line)
{
	int				ret;
	char			*tmp;

	while ((ret = read(fd, hot, BUFFER_SIZE)) > 0)
	{
		hot[ret] = '\0';
		if (*readed)
		{
			tmp = *readed;
			*readed = ft_strjoin(tmp, hot);
			free(tmp);
			tmp = NULL;
		}
		else
			*readed = ft_strdup(hot);
		if (check_if_line(readed, line))
			break ;
	}
	if (ret > 0)
		return (1);
	else
		return (-1);
}

/*
** 检查错误，比如line为空，fd值小于0，然后返回-1
** 如果read之后不为空，就看一下有没有新的一行
** 然后将tmp值置0，以防野数据
** 如果遇到EOF, 就free掉tmp里的值，然后如果read之后为空了，就返回readed（0）
** 如果一切顺利，将读到的值保存到line，然后清空readed，返回1
*/
int			get_next_line(int fd, char **line)
{
	static char		*readed[FD];
	char			*tmp;
	int				ret;

	if (!(tmp = (char *)malloc(sizeof(char) * BUFFER_SIZE + 1)) || !line
		|| (fd < 0 || fd >= FD) || (read(fd, readed[fd], 0) < 0))
		return (-1);
	if (readed[fd])
		if (check_if_line(&readed[fd], line))
			return (1);
	ft_memset(tmp, 0, BUFFER_SIZE);
	ret = read_fd(fd, tmp, &readed[fd], line);
	free(tmp);
	if (ret != 0 || readed[fd] == NULL || readed[fd][0] == '\0')
	{
		if (!ret && *line)
			*line = NULL;
		return (ret);
	}
	*line = readed[fd];
	readed[fd] = NULL;
	return (1);
}
