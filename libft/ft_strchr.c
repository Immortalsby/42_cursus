/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshi <sby945913@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 21:54:41 by bshi              #+#    #+#             */
/*   Updated: 2019/10/05 22:16:40 by bshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** char * strchr (const char *string, int c)
** The strchr function finds the first occurrence of the byte c (converted to
** a char) in the string beginning at string. The return value is a pointer
** to the located byte, or a null pointer if no match was found.
** The terminating null byte is considered to be part of the string, so you
** can use this function get a pointer to the end of a string by specifying
** zero as the value of the c argument.
*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != (char)c)
	{
		if (*s == '\0')
			return (NULL);
		s++;
	}
	return ((char *)s);
}
