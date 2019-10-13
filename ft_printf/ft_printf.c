/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 14:20:41 by bshi              #+#    #+#             */
/*   Updated: 2019/10/13 22:54:36 by bshi             ###   ########.fr       */
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
int		ft_putstrlen(char *str);
int		ft_puthex(long unsigned int n, char *hex, int i);
char	*ft_itoa(long i);

int		ft_printf(const char *format, ...)
{
	int		count;
	char	next;
	va_list	ap;

	count = 0;
	va_start(ap, format);
	while (*format)
	{
		next = *format;
		if (next == '%')
		{
			if (*++format == 'c')
			{
				ft_putchar((char)va_arg(ap, int));
				count++;
			}
			else if (*format == 's')
			{
				count += ft_putstrlen(va_arg(ap, char *));
			}
			else if (*format == 'p')
			{
				ft_putstrlen("0x");
				count += 2;
				count += ft_puthex(va_arg(ap, long unsigned int),
						"0123456789abcdef", 0);
			}
			else if (*format == 'd' || *format == 'i')
			{
				count += ft_putstrlen(ft_itoa(va_arg(ap, int)));
			}
			else if (*format == 'u')
			{
					count += ft_putstrlen(ft_itoa((unsigned int )(va_arg(ap, unsigned int))));
			}
			else if (*format == 'x')
			{
				count += ft_puthex(va_arg(ap, long unsigned int),
						"0123456789abcdef", 0);
			}
			else if (*format == 'X')
			{
				count += ft_puthex(va_arg(ap, long unsigned int),
						"0123456789ABCDEF", 0);	
			}
		}
		else
		{
			ft_putchar(*format);
			count++;
		}
		format++;
	}
	va_end(ap);
	return (count);
}

int main()
{
	int	len;
	int	i = 132;
	int	n = -12;
	int	j = -2147483648;
	char	str[]="test";
	char	c = 't';

	/* type s */
	printf("----------My printf: \n");
	len = ft_printf("The test is for format \'s\', result:\n%s\n", str);
	printf("Output de retour:\n%d\n", len);
	printf("----------Original printf: \n");
	len = printf("The test is for format \'s\', result:\n%s\n", str);
	printf("Output de retour:\n%d\n", len);	
	/* type c */
	printf("----------My printf: \n");
	len = ft_printf("The test is for format \'c\', result:\n%c\n", c);
	printf("Output de retour:\n%d\n", len);
	printf("----------Original printf: \n");
	len = printf("The test is for format \'c\', result:\n%c\n", c);
	printf("Output de retour:\n%d\n", len);
	/* type p */
	printf("----------My printf: \n");
	len = ft_printf("The test is for format \'p\', result:\n%p\n", str);
	printf("Output de retour:\n%d\n", len);
	printf("----------Original printf: \n");
	len = printf("The test is for format \'p\', result:\n%p\n", str);
	printf("Output de retour:\n%d\n", len);
	/* type d */
	printf("----------My printf: \n");
	len = ft_printf("The test is for format \'i\', result:\n1.%d\n2.%d\n3.%d\n", i, 2147483647, j);
	printf("Output de retour:\n%d\n", len);
	printf("----------Original printf: \n");
	len = printf("The test is for format \'i\', result:\n1.%d\n2.%d\n3.%d\n", i, 2147483647, j);
	printf("Output de retour:\n%d\n", len);
	/* type i */
	printf("----------My printf: \n");
	len = ft_printf("The test is for format \'i\', result:\n1.%i\n2.%i\n3.%i\n", 13, 2147483647, j);
	printf("Output de retour:\n%d\n", len);
	printf("----------Original printf: \n");
	len = printf("The test is for format \'i\', result:\n1.%i\n2.%i\n3.%i\n", 13, 2147483647, j);
	printf("Output de retour:\n%d\n", len);
	/* type u */
	printf("----------My printf: \n");
	len = ft_printf("The test is for format \'u\', result:\n1.%u\n2.%u\n3.%u\n", n, 2147483647, j);
	printf("Output de retour:\n%d\n", len);
	printf("----------Original printf: \n");
	len = printf("The test is for format \'u\', result:\n1.%u\n2.%u\n3.%u\n", n, 2147483647, j);
	printf("Output de retour:\n%d\n", len);
	/* type x */
	printf("----------My printf: \n");
	len = ft_printf("The test is for format \'x\', result:\n1.%x\n2.%x\n3.%x\n", n, 2147483647, j);
	printf("Output de retour:\n%d\n", len);
	printf("----------Original printf: \n");
	len = printf("The test is for format \'x\', result:\n1.%x\n2.%x\n3.%x\n", n, 2147483647, j);
	printf("Output de retour:\n%d\n", len);
	/* type X */
	printf("----------My printf: \n");
	len = ft_printf("The test is for format \'X\', result:\n1.%X\n2.%X\n3.%X\n", n, 2147483647, j);
	printf("Output de retour:\n%d\n", len);
	printf("----------Original printf: \n");
	len = printf("The test is for format \'X\', result:\n1.%X\n2.%X\n3.%X\n", n, 2147483647, j);
	printf("Output de retour:\n%d\n", len);

	return (0);
}
