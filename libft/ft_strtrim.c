/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 13:20:14 by bshi              #+#    #+#             */
/*   Updated: 2019/10/09 11:58:23 by bshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	cal_size(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	k = 0;
	while (i < ft_strlen(s1))
	{
		j = 0;
		while (s1[i] != set[j] && j < ft_strlen(set))
			j++;
		if (j == ft_strlen(set))
			k++;
		i++;
	}
	return (k);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	len;
	char	*str;

	i = 0;
	k = 0;
	len = cal_size(s1, set);
	if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (i < ft_strlen(s1))
	{
		j = 0;
		while (s1[i] != set[j] && j < ft_strlen(set))
			j++;
		if (j == ft_strlen(set))
		{
			str[k] = s1[i];
			k++;
		}
		i++;
	}
	return (str);
}
