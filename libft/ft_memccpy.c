/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshi <sby945913@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 11:31:43 by bshi              #+#    #+#             */
/*   Updated: 2019/10/07 17:12:23 by bshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** void *memccpy(void *restrict to,const void *restrict from,int c,size_t size)
** This function copies no more than size bytes from from to to, stopping if
** a byte matching c is found. The return value is a pointer into to one byte
** past where c was copied, or a null pointer if no byte matching c appeared
** in the first size bytes of from.
*/

#include "libft.h"

void	*ft_memccpy(void *desc, const void *src, int c, size_t size)
{
	unsigned char *d;
	unsigned char *s;

	d = (unsigned char *)desc;
	s = (unsigned char *)src;
	while (size-- > 0)
	{
		*d = *s;
		if (*s == (unsigned char)c)
			return (d + 1);
		d++;
		s++;
	}
	return (NULL);
}
