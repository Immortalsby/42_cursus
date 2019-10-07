/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshi <sby945913@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 10:44:06 by bshi              #+#    #+#             */
/*   Updated: 2019/10/03 21:32:16 by bshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The memcpy function copies size bytes from the object beginning at from 
** into the object beginning at to. The behavior of this function is undefined
** if the two arrays to and from overlap; use memmove instead if overlapping
** is possible.
** The value returned by memcpy is the value of to.
*/

#include "libft.h"

void	*ft_memcpy(void *desc, const void *src, size_t size)
{
	unsigned char *d;
	unsigned char *s;

	d = (unsigned char *)desc;
	s = (unsigned char *)src;
	if((desc == NULL) && (src == NULL))
		return NULL; 
	while(size-- >0) 
	{
  		*d = *s;
		d++;
		s++;
	}
	return desc;
}
