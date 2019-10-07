/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshi <sby945913@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 11:25:28 by bshi              #+#    #+#             */
/*   Updated: 2019/10/07 17:34:55 by bshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** strnstr函数说明，在s1的前pos1个字符串中查找s2，如果存在就返回s2在s1中的位
** 置，如果没有找到，返回 NULL
*/

#include "libft.h"

char	*ft_strnstr(const char *str, const char *c, size_t n)
{
	size_t i;
	size_t pos;
	size_t len;

	i = 0;
	pos = 0;
	len = 0;
	while (c[len] != '\0')
		len++;
	if (len == 0)
		return ((char *)str);
	while (str[i] && i <= n)
	{
		while (c[pos] == str[i + pos])
		{
			if (pos == len - 1)
				return ((char *)str + i);
			pos++;
		}
		pos = 0;
		i++;
	}
	return (NULL);
}
