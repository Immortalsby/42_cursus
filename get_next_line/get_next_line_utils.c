/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshi <sby945913@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 16:42:50 by bshi              #+#    #+#             */
/*   Updated: 2019/10/14 21:44:19 by bshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*ft_memcpy(void *desc, const void *src, size_t size)
{
	unsigned char *d;
	unsigned char *s;

	d = (unsigned char *)desc;
	s = (unsigned char *)src;
	if ((desc == NULL) && (src == NULL))
		return (NULL);
	while (size-- > 0)
	{
		*d = *s;
		d++;
		s++;
	}
	return (desc);
}

/* 计算str长度 */
size_t		ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/* 新建立一个str将s给他 */
char	*ft_strdup(const char *s)
{
	char	*n;
	int		i;
	int		size;

	size = 0;
	while (s[size])
		size++;
	if (!(n = (char *)malloc(sizeof(char) * size)))
		return (NULL);
	i = 0;
	while (s[i])
	{
		n[i] = s[i];
		i++;
	}
	n[i] = '\0';
	return (n);
}

/* 把s2放到s1后面 */
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*d;
	size_t	i;
	size_t	len;

	len = ft_strlen(s1) + ft_strlen(s2);
	d = (char *)malloc(sizeof(char) * (len + 1));
	if (!d)
		return (NULL);
	i = 0;
	d = (char *)ft_memcpy(d, s1, ft_strlen(s1));
	while (i < ft_strlen(s2))
	{
		d[ft_strlen(s1) + i] = s2[i];
		i++;
	}
	d[len] = '\0';
	return (d);
}
