/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 15:29:09 by bshi              #+#    #+#             */
/*   Updated: 2019/10/08 19:18:46 by bshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	cal_size(int n)
{
	size_t	len;

	len = 0;
	if (n < 0)
		len++;
	if (n == 0)
		len = 1;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static	void	trans(char *res, int n, int len)
{
	int i;

	i = 0;
	while (i < len)
	{
		res[len - i - 1] = n % 10 + '0';
		n = n / 10;
		i++;
	}
}

char			*ft_itoa(int n)
{
	char	*res;
	size_t	len;
	int		f;

	f = 1;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = cal_size(n);
	if (!(res = (char *)malloc(sizeof(char *) * (len + 1))))
		return (NULL);
	if (n < 0)
	{
		f = -1;
		n *= -1;
	}
	trans(res, n, len);
	if (f == -1)
		res[0] = '-';
	res[len] = '\0';
	return (res);
}
