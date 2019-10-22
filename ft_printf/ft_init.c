#include "ft_printf.h"

void    print_init(t_print *t)
{
    t->percent = 0;    
    t->point = 0;
}

int     print_percent(t_print *t, char c)
{
    if (c == '%')
    {
        t->percent = 1;
        return (0);
    }
    ft_putchar(c);
    return (1);
}

int     ft_check(char c)
{
    if (c != '-' && c != '.' && c != '.' && c != '*' && !ft_isnbr(c))
        return (1);
    else
        return (0);
}

int     deal_flag(char c, t_print *t, va_list ap)
{
    if (c == '-')
        ft_deal();
    else if (c == '0' && t->nostar == 0)
        ft_deal();
    else if (c == '.')
    {
        t->point = 1;
        t->
    }
}

int     print_nonpercent(t_print *t, char c, va_list ap)
{
    if (t->point == 1 && c == '*')
        t->point = 0;
    if (ft_check(c))
    {
        t->percent = 0;
        if (c == 'c' || c == 's')
    	    t->precise = 0;
        else if (c == 'c')
		    t->tmp = set_c(ap);
    	else if (c == 's')
	    	t->tmp = set_s(ap);
	    else if (c == 'p')
		    t->tmp = set_p(ap);
        else if (c == 'd' || c == 'i')
	    	t->tmp = set_i(ap, t);
	    else if (c == 'u')
	    	t->tmp = set_u(ap, t);
	    else if (c == 'x' || c == 'X')
		    t->tmp = set_x(ap, c);
        if (t->tmp = NULL && (t->err = 1))
            return (0);
        return (put_screen(t));
    }
    else
        deal_flag(c, t, ap);
}