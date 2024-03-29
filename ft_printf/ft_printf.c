/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshi <bshi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 14:20:41 by bshi              #+#    #+#             */
/*   Updated: 2019/10/22 13:06:14 by bshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
** va_start(arg,format),初始化参数指针arg，将函数参数format右边第一个参数地址赋值给arg  
** format必须是一个参数的指针，所以，此种类型函数至少要有一个普通的参数,   
** 从而提供给va_start ,这样va_start才能找到可变参数在栈上的位置。   
** va_arg(arg,char),获得arg指向参数的值，同时使arg指向下一个参数,char用来指名当前参数型  
** va_end 在有些实现中可能会把arg改成无效值，这里，是把arg指针指向了 NULL,避免出现野指针   
*/

#include "ft_printf.h"

int		ft_printf(const char *str, ...)
{
	t_print	*t;
	int		i;
	int		j;
	va_list	ap;

	if (!(t = (t_print *)malloc(sizeof(t_print))))
		return (0);
	print_init(t);
	i = 0;
	while (str[i])
	{
		if (t->percent == 0)
			j += print_percent();
		else
			j += print_nonpercent();
	}
}










// void	ft_putchar(char c);
// int		ft_putstrlen(char *str);
// int		ft_puthex(long unsigned int n, char *hex, int i);
// char	*ft_itoa(long i);

// int		ft_printf(const char *format, ...)
// {
// 	int		count;
// 	char	next;
// 	va_list	ap;

// 	count = 0;
// 	va_start(ap, format);
// 	while (*format)
// 	{
// 		next = *format;
// 		if (next == '%')
// 		{
// 			if (*++format == 'c')
// 			{
// 				ft_putchar((char)va_arg(ap, int));
// 				count++;
// 			}
// 			else if (*format == 's')
// 			{
// 				count += ft_putstrlen(va_arg(ap, char *));
// 			}
// 			else if (*format == 'p')
// 			{
// 				ft_putstrlen("0x");
// 				count += 2;
// 				count += ft_puthex(va_arg(ap, long unsigned int),
// 						"0123456789abcdef", 0);
// 			}
// 			else if (*format == 'd' || *format == 'i')
// 			{
// 				count += ft_putstrlen(ft_itoa(va_arg(ap, int)));
// 			}
// 			else if (*format == 'u')
// 			{
// 					count += ft_putstrlen(ft_itoa((unsigned int )(va_arg(ap, unsigned int))));
// 			}
// 			else if (*format == 'x')
// 			{
// 				count += ft_puthex(va_arg(ap, long unsigned int),
// 						"0123456789abcdef", 0);
// 			}
// 			else if (*format == 'X')
// 			{
// 				count += ft_puthex(va_arg(ap, long unsigned int),
// 						"0123456789ABCDEF", 0);	
// 			}
// 		}
// 		else
// 		{
// 			ft_putchar(*format);
// 			count++;
// 		}
// 		format++;
// 	}
// 	va_end(ap);
// 	return (count);
// }

