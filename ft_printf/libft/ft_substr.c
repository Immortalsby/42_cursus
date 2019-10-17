/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 18:17:32 by bshi              #+#    #+#             */
/*   Updated: 2019/10/15 16:38:36 by bshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*d;
	size_t	i;
	int	tmp;

	if (start >= ft_strlen(s))
	{
		if (!(d = (char *)malloc(sizeof(char) * 1)))
			return (NULL);
		d[0] = '\0';
		return (d);
	}
	tmp = start;
	i = -1;
	while (++i < len && s[tmp])
		tmp++;
	if (!(d = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	i = 0;
	while (i < len && s[start])
		d[i++] = s[start++];
	d[i] = '\0';
	return (d);
}
