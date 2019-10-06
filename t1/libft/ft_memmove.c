/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshi <sby945913@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 17:45:26 by bshi              #+#    #+#             */
/*   Updated: 2019/10/03 23:13:31 by bshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** void * memmove (void *to, const void *from, size_t size)
** memmove copies the size bytes at from into the size bytes at to, even if 
** those two blocks of space overlap. In the case of overlap, memmove is
**  careful to copy the original values of the bytes in the block at from,
** including those bytes which also belong to the block at to.
** The value returned by memmove is the value of to.
*/

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t num)
{
	size_t		i;
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	if (s < d)
		while (++i <= num)
			d[num - i] = s[num - i];
	else
		while (num-- > 0)
			*(d++) = *(s++);
	return (dest);
}
