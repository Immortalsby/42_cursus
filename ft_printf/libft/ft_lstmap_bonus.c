/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshi <sby945913@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 01:52:35 by bshi              #+#    #+#             */
/*   Updated: 2019/10/10 12:16:13 by bshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(void*))
{
	t_list *res;
	t_list *t;
	t_list *new;

	if (!lst || !f)
		return (NULL);
	t = f(lst);
	if (!(new = ft_lstnew(t->content)))
		return (NULL);
	lst = lst->next;
	res = new;
	while (lst)
	{
		t = f(lst);
		if (!(new->next = ft_lstnew(t->content)))
			return (NULL);
		new = new->next;
		lst = lst->next;
	}
	return (res);
}
