/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshi <sby945913@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 10:26:32 by bshi              #+#    #+#             */
/*   Updated: 2019/10/07 17:24:01 by bshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** strlcpy() copies up to n - 1	characters from	the string src to dst,
** NUL-terminating the result	if dstsize is not 0.
*/

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t i;

	i = 0;
	while (--size && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}
