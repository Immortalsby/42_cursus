/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshi <sby945913@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 11:39:02 by bshi              #+#    #+#             */
/*   Updated: 2019/10/05 22:26:11 by bshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The strcmp function compares the string s1 against s2, returning a value
** that has the same sign as the difference between the first differing pair
** of bytes (interpreted as unsigned char objects, then promoted to int).
** If the two strings are equal, strcmp returns 0.
** A consequence of the ordering used by strcmp is that if s1 is an initial
** substring of s2, then s1 is considered to be “less than” s2.
*/

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
