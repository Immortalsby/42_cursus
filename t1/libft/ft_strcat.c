/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshi <sby945913@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 21:41:21 by bshi              #+#    #+#             */
/*   Updated: 2019/10/04 00:12:10 by bshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** char * strcat (char *restrict to, const char *restrict from)
** The strcat function is similar to strcpy, except that the bytes from from
** are concatenated or appended to the end of to, instead of overwriting it.
** That is, the first byte from from overwrites the null byte marking the
** end of to.
*/

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	int i;
	int ld;

	i = 0;
	ld = 0;
	while (dest[ld])
		ld++;
	while (src[i])
	{
		dest[ld + i] = src[i];
		i++;
	}
	dest[ld + i] = '\0';
	return (dest);
}
