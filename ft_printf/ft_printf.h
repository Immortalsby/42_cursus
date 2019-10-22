#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

typedef struct  s_print
{
    int percent;
    int point;
    int err;
    int count;
    char *tmp;
    int star;
    int nostar;
}               t_print;

#endif