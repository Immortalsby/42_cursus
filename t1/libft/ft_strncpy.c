/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshi <sby945913@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 10:26:32 by bshi              #+#    #+#             */
/*   Updated: 2019/10/04 00:10:22 by bshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** char *strncpy(char *restrict to, const char *restrict from, size_t size)
** This function is similar to strcpy but always copies exactly size bytes
** into to.
** If from does not contain a null byte in its first size bytes, strncpy
** copies just the first size bytes. In this case no null terminator is
** written into to.
** Otherwise from must be a string with length less than size. In this case
** strncpy copies all of from, followed by enough null bytes to add up
** to size bytes in all.
*/

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t i;

	i = 0;
	while ((src[i] != 0) && (i < n))
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}  
