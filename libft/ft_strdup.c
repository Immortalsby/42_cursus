/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshi <sby945913@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 18:54:55 by bshi              #+#    #+#             */
/*   Updated: 2019/10/08 15:50:17 by bshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function copies the string s into a newly allocated string. The string
** is allocated using malloc. If malloc cannot allocate space for the new
** string, strdup returns a null pointer. Otherwise it returns a pointer to
** the new string.
*/

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*n;
	int		i;
	int		size;

	size = 0;
	while (s[size])
		size++;
	if (!(n = (char *)malloc(sizeof(char) * size)))
		return (NULL);
	i = 0;
	while (s[i])
	{
		n[i] = s[i];
		i++;
	}
	n[i] = '\0';
	return (n);
}
