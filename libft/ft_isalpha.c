/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshi <sby945913@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 23:39:14 by bshi              #+#    #+#             */
/*   Updated: 2019/10/02 23:52:32 by bshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_isalpha() function tests for any character for which isupper(3) or
** islower(3) is true.  The value of the argument must be representable as an
** unsigned char or the value of EOF.
*/

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
