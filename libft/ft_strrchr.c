/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshi <sby945913@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 22:10:20 by bshi              #+#    #+#             */
/*   Updated: 2019/10/05 22:21:15 by bshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The function strrchr is like strchr, except that it searches backwards
** from the end of the string string (instead of forwards from the front).
*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int 	i;
	
	i = 0;
	while (s[i] != '\0')
		i++;
	while (s[i] != (char)c)
	{
		if (i == 0)
			return (NULL);
		i--;
	}
	return ((char *)&s[i]);
}
