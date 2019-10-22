/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utiles.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshi <bshi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 14:15:06 by bshi              #+#    #+#             */
/*   Updated: 2019/10/22 13:15:13 by bshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_rputchar(int len, char c)
{
	int i;

	i = -1;
	while (++i < len)
		ft_putchar(c);
	return (i);
}

int		ft_putstrlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}

	return (i);
}

int		ft_max(int i, int j)
{
	if (i > j)
		return (i);
	else
		return (j);
}

int		ft_puthex(long unsigned int n, char *hex, int i)
{
	i++;
	if (n > 15)
		i = ft_max(i, ft_puthex(n / 16, hex, i));
	ft_putchar(hex[n % 16]);
	return (i);
}

int		ft_isnbr(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}