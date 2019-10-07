/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshi <sby945913@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 23:17:03 by bshi              #+#    #+#             */
/*   Updated: 2019/10/03 23:17:53 by bshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** void * memchr (const void *block, int c, size_t size)
** This function finds the first occurrence of the byte c (converted to an
** unsigned char) in the initial size bytes of the object beginning at block.
** The return value is a pointer to the located byte, or a null pointer if
** no match was found.
*/

#include "libft.h"

void	*ft_memchr(const void *block, int c, size_t size)
{
	unsigned char	*b;
	unsigned char	d;

	b = (unsigned char *)block;
	d = (unsigned char)c;
	while (size-- > 0)
	{
		if (*b == d)
			return (b);
		b++;
	}
	return (NULL);
}
