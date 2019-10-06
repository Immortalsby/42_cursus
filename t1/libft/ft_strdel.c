/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshi <sby945913@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/05 22:35:19 by bshi              #+#    #+#             */
/*   Updated: 2019/10/05 22:43:50 by bshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Prend en paramètre l’adresse d’une chaine de caractères qui
** doit être libérée avec free(3) et son pointeur mis à NULL.
*/

#include "libft.h"

void	ft_strdel(char **as)
{
	if (ap != NULL)
	{
		free(*ap);
		*ap = NULL;
	}
}
