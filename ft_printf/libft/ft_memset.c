/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshi <sby945913@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 11:52:33 by bshi              #+#    #+#             */
/*   Updated: 2019/10/07 17:16:18 by bshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function copies the value of c (converted to an unsigned char) into
** each of the first size bytes of the object beginning at block. It returns
** the value of block.
*/

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	value;
	size_t			size;

	if (str == NULL)
		return (NULL);
	value = (unsigned char)c;
	size = 0;
	while (size < n)
	{
		((char *)str)[size] = value;
		size++;
	}
	return (str);
}
