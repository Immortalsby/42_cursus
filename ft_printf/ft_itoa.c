/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 15:29:09 by bshi              #+#    #+#             */
/*   Updated: 2019/10/13 22:46:58 by bshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static	size_t	cal_size(long n)
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

static	void	trans(char *res, long n, int len)
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

char			*ft_itoa(long n)
{
	char	*res;
	size_t	len;
	int		f;
	long	ln;

	ln = n;
	f = 1;
	len = cal_size(ln);
	if (!(res = (char *)malloc(sizeof(char *) * (len + 1))))
		return (NULL);
	if (ln < 0)
	{
		f = -1;
		ln *= -1;
	}
	trans(res, ln, len);
	if (f == -1)
		res[0] = '-';
	res[len] = '\0';
	return (res);
}
