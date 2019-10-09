/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 18:17:32 by bshi              #+#    #+#             */
/*   Updated: 2019/10/09 11:58:39 by bshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*d;
	size_t	i;
	size_t	size;

	i = 0;
	size = 0;
	if (start >= ft_strlen(s))
		size = 1;
	else
		size = ft_strlen(s) - start;
	if (len < size)
		size = len;
	d = (char *)malloc(sizeof(char) * (size + 1));
	if (d == NULL)
		return (NULL);
	while (s[start] && len > 0 && size)
	{
		d[i] = s[start];
		i++;
		start++;
		size--;
	}
	d[i] = '\0';
	return (d);
}
