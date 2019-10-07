/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshi <sby945913@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 21:44:23 by bshi              #+#    #+#             */
/*   Updated: 2019/10/04 14:17:32 by bshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** char * strncat (char *restrict to, const char *restrict from, size_t size)
** This function is like strcat except that not more than size bytes from from
** are appended to the end of to, and from need not be null-terminated. A
** single null byte is also always appended to to, so the total allocated
** size of to must be at least size + 1 bytes longer than its initial length.
*/

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t nb)
{
	size_t i;
	size_t ld;

	i = 0;
	ld = 0;
	while (dest[ld])
		ld++;
	while (src[i] && i < nb)
	{
		dest[ld + i] = src[i];
		i++;
	}
	dest[ld + i] = '\0';
	return (dest);
}
