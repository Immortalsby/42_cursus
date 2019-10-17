/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshi <sby945913@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 09:57:42 by bshi              #+#    #+#             */
/*   Updated: 2019/10/08 17:19:43 by bshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This is a partially obsolete alternative for memset
** Note that it is not as general as memset, because the only value it can
** store is zero.
*/

#include "libft.h"

void			ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
