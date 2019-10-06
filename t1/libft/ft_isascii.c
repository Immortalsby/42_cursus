/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshi <sby945913@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 00:00:02 by bshi              #+#    #+#             */
/*   Updated: 2019/10/03 00:02:45 by bshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_isascii() function tests for an ASCII character, which is any
** character between 0 and decimal  127 inclusive.
*/

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
