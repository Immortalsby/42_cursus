/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshi <sby945913@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 21:50:22 by bshi              #+#    #+#             */
/*   Updated: 2019/10/05 21:18:41 by bshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Appends src to string dst of size siz (unlike strncat, siz is the
** full size of dst, not space left).  At most siz-1 characters
** will be copied.  Always NUL terminates (unless siz <= strlen(dst)).
** Returns strlen(src) + MIN(siz, strlen(initial dst)).
 * If retval >= siz, truncation occurred.
 */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	s1_end;

	i = 0;
	while (dest[i] && i < size)
		i++;
	s1_end = i;
	while (src[i - s1_end] && i < size - 1)
	{
		dest[i] = src[i - s1_end];
		i++;
	}
	if (s1_end < size)
		dest[i] = '\0';
	return (s1_end + ft_strlen(src));
}
