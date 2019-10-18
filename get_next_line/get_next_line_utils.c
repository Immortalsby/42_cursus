/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshi <sby945913@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 16:42:50 by bshi              #+#    #+#             */
/*   Updated: 2019/10/18 18:13:48 by bshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

size_t			ft_strlen_sc(const char *str, char c)
{
	size_t	len;

	len = 0;
	if (!str)
		return (0);
	while (str[len] != '\0' && str[len] != c)
		len++;
	return (len);
}

char			*ft_strjoin(char const *s1, char const *s2)
{
	char	*d;
	size_t	i;
	size_t	len;

	len = ft_strlen_sc(s1, '\0') + ft_strlen_sc(s2, '\0');
	if (!(d = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = 0;
	while (s1 && *s1 != '\0')
		d[i++] = *s1++;
	while (s2 && *s2 != '\0')
		d[i++] = *s2++;
	d[i] = '\0';
	return (d);
}

char			*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*str;
	char	*tmp;
	char	*cpy;

	if (!s || !(tmp = (char *)malloc(sizeof(char) * (len + 1))))
		return (0);
	if (start > ft_strlen_sc(s, '\0'))
		tmp[0] = '\0';
	else
	{
		str = (char *)s + start;
		cpy = tmp;
		while (len-- > 0 && *str)
			*cpy++ = *str++;
		*cpy = '\0';
	}
	return (tmp);
}
