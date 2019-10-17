/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshi <sby945913@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 01:14:18 by bshi              #+#    #+#             */
/*   Updated: 2019/10/10 01:44:54 by bshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *t;
	t_list *s;

	t = *lst;
	while (t)
	{
		s = t->next;
		del(t->content);
		free(t);
		t = s;
	}
	*lst = NULL;
}
