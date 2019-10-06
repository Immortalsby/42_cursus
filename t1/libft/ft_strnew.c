/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshi <sby945913@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 00:43:05 by bshi              #+#    #+#             */
/*   Updated: 2019/10/03 21:07:35 by bshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The function ft_strnew() allocates with malloc(3) and returns a fresh
** string ending with '\0'. Each character of the string is initialized at
** '\0'. If the allocation fails, the function returns NULL.
*/

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *s;

	if (!(s = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	ft_memset(s, '\0', size + 1);
	return (s);
}
