/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshi <sby945913@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 09:57:42 by bshi              #+#    #+#             */
/*   Updated: 2019/10/03 21:26:15 by bshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This is a partially obsolete alternative for memset, derived from BSD. 
** Note that it is not as general as memset, because the only value it can 
** store is zero.
*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	
	i = 0;
	if (s == NULL)
		exit(0);
	while (i < n)
	{
		((char *)s)[i] = 0;
		i++;
	}
}
