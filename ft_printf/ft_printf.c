/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 14:20:41 by bshi              #+#    #+#             */
/*   Updated: 2019/10/11 20:24:43 by bshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
** va_start(arg,format),初始化参数指针arg，将函数参数format右边第一个参数地址赋值给arg  
** format必须是一个参数的指针，所以，此种类型函数至少要有一个普通的参数,   
** 从而提供给va_start ,这样va_start才能找到可变参数在栈上的位置。   
** va_arg(arg,char),获得arg指向参数的值，同时使arg指向下一个参数,char用来指名当前参数型  
** va_end 在有些实现中可能会把arg改成无效值，这里，是把arg指针指向了 NULL,避免出现野指针   
*/

#include <stdarg.h>
#include <stdio.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
char	*ft_itoa(int i);

int		ft_printf(const char *fmt, ...)
{
	int		count;
	char	format;
	char	next;
	va_list	ap;

	count = 0;
	format = *fmt;
	va_start(ap, fmt);
	while (format)
	{
		if (format == '%')
		{
			next = *++fmt;
			if (next == 'd' && ++count)
			{
				ft_putstr(ft_itoa(va_arg(ap, int)));
				break ;
			}
			if (format == 's')
			{
				ft_putstr(ft_itoa(va_arg(ap, int)));
				break ;
			}
//			if (format == 'p')

			if (format == 'c')
			{
				ft_putchar(*ft_itoa(va_arg(ap, int)));
				break ;
			}
//			if (format == 'i')

//			if (format == 'u')

//			if (format == 'x')

//			if (format == 'X')
		}
		else
		{
			ft_putchar(format);
			break ;
		}
	}
	return (count);
}

int main()
{
	int i = 132;
	char str[]="test";
	char c = 't';
	ft_printf("%d\n", i);
	printf("%d\n", i);
	ft_printf("%s\n", str);
	printf("%s\n", str);
	ft_printf("%c\n", c);
	printf("%c\n", c);
	return (0);
}
