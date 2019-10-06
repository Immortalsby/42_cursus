/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshi <sby945913@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 19:40:08 by bshi              #+#    #+#             */
/*   Updated: 2019/10/04 00:08:01 by bshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** char * strcpy (char *restrict to, const char *restrict from)
** This copies bytes from the string from (up to and including the
** terminating null byte) into the string to. Like memcpy, this function
** has undefined results if the strings overlap. The return value is the
** value of to.
*/

#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	int n;

	n = 0;
	while (src[n] != 0)
	{
		dest[n] = src[n];
		n++;
	}
	dest[n] = '\0';
	return (dest);
}
