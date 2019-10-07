/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 13:49:11 by bshi              #+#    #+#             */
/*   Updated: 2019/10/07 14:38:21 by bshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function allocates a block long enough to contain a vector of count
**elements, each of size eltsize. Its contents are cleared to zero before
**calloc returns.
*/

#include "libft.h"

void	*ft_calloc(size_t count, size_t eltsize)
{
	size_t size;
	void *value;

	size = count * eltsize;
	value = malloc(size);
	if (value != 0)
		ft_memset(value, 0, size);
	return (value);
}
