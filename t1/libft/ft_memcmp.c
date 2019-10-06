/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshi <sby945913@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 18:30:00 by bshi              #+#    #+#             */
/*   Updated: 2019/10/03 23:20:01 by bshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The function memcmp compares the size bytes of memory beginning at a1
** against the size bytes of memory beginning at a2. The value returned has
** the same sign as the difference between the first differing pair of bytes
** (interpreted as unsigned char objects, then promoted to int).
**
** If the contents of the two blocks are equal, memcmp returns 0.
*/

#include "libft.h"

int	ft_memcmp(const void *a1, const void *a2, size_t size)
{
	const unsigned char	*s1;
	const unsigned char	*s2;
	size_t			i;

	if (a1 == a2 || size == 0)
		return (0);
	s1 = (const unsigned char *)a1;
	s2 = (const unsigned char *)a2;
	i = 0;
	while (i < size)
	{
		if(s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
