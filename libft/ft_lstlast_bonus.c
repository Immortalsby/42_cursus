/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 13:06:59 by bshi              #+#    #+#             */
/*   Updated: 2019/10/10 01:35:43 by bshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list *last;
	t_list *list;

	list = lst;
	while (list)
	{
		if (!(list->next))
			last = list;
		list = list->next;
	}
	return (last);
}
