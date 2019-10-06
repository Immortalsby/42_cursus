/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshi <sby945913@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 00:24:15 by bshi              #+#    #+#             */
/*   Updated: 2019/10/05 22:30:48 by bshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Alloue (avec malloc(3)) et retourne une zone de mémoire
** “fraiche”. La mémoire allouée est initialisée à 0. Si l’allocation
** échoue, la fonction renvoie NULL.
*/

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*ptr;
	char	*str;
	size_t	i;

	if (size)
	{
		ptr = (void *)malloc(sizeof(*ptr * size));
		if (ptr)
		{
			str = (char *)b;
			i = 0;
			while (i < size)
			{
				str[i] = 0;
				i++;
			}
			return (ptr);
		}
	}
	return (NULL);
}
