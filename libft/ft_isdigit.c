/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshi <sby945913@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 23:49:30 by bshi              #+#    #+#             */
/*   Updated: 2019/10/02 23:53:50 by bshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_isdigit() function tests for a decimal digit character.  Regardless of
** locale, this includes the following characters only: '0' - '9'
*/

#include "libft.h"

int	ft_isdigit(int c)
{
	if(c >= '0' && c <= '9')
		return (1);
	return (0);
}
