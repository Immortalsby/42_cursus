/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshi <sby945913@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 18:21:44 by bshi              #+#    #+#             */
/*   Updated: 2019/10/08 18:33:53 by bshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function is the similar to strcmp, except that no more than size bytes
** are compared. In other words, if the two strings are the same in their
** first size bytes, the return value is zero.
*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t size)
{
	if (size == 0)
		return (0);
	while (size != 0)
	{
		if (*s1 != *s2++)
			return (*(unsigned char *)s1 - *(unsigned char *)--s2);
		if (*s1++ == 0)
			break ;
		size--;
	}
	return (0);
}
