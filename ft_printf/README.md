###	Plan for rebuild this project
## This project need to be clean and extensionable, that means I need to really make a plan for this sh*t.
# Intro
A note on capital letter (wide) conversion types: “Nothing about Unicode
or wide characters alters the meaning of the char data type in C. The char
continues to indicate 1 byte of storage, and sizeof(char) continues to
return 1. In theory, a byte in C can be greater than 8 bits, but for most
of us, a byte (and hence a char) is 8 bits wide.

Wide characters in C are based on the “wchar_t” data type, which is defined
in several headers files, including “<wchar.h>“, like so:
“typedef unsigned short wchar_t;”

Thus, the “wchar_t” data type is the same as an unsigned short integer:
16 bits wide.

Source: The C Programming Language, 2nd Edition (Dennis Ritchie), page 137
&&
Source: C Primer Plus 6th Edition, page 113

*******************************Mandatory Part*******************************
Types of conversions:

s S p d D i o O u U x X c C
s: Print characters from the string until a ‘\0’ or the number of
characters given by the precision

S: Equivalent of “%ls”

p: Pointer

d: Signed decimal integer

:anguished: Equivalent of “%ld”

i: Equivalent of ‘d’

o: Unsigned octal number (without a leading zero)

u: Unsigned decimal number

U: Equivalent of “%lu”

x: Unsigned hexadecimal number (without a leading 0x), using abcdef
for 10, ..., 15.

X: Unsigned hexadecimal number (without a leading 0X), using ABCDEF
for 10, ..., 15.

c: Single character

C: Equivalent of “%lc”

Length modifiers:
Modifier        d, i            o, u, x, X            n
hh                signed char        unsigned char        signed char *
h                short            unsigned short        short *
l (ell)            long            unsigned long        long *
ll (ell ell)    long long        unsigned long long    long long *
j                intmax_t        uintmax_t            intmax_t *
z                (see note)        size_t                (see note)

Flags:
#: A “#” character sepcifies that the value should be printed in
“alternate” form.
This option has no effect on “b, c, d, s,” and “u” formats.
For the o formats, the precision of the number increases to make the first
character of the outputted string to be zero.
For the x/X format, a non-zero string has the string 0x/0X prepended to it.
For “a, A, e, E, f, F, g, and G formats”, the result always has a decimal.
For “g and G” formats, trailing zeros are not removed from the result as
they usually would be.
0: A “0” character indicates that zero-padding should be used rather than
blank padding. A “-” overrides a “0” if both are used. If a numeric
conversion is given (d, i, o, u, i, x, and X), then the ‘0’ flag is ignored.
-: A “-” sign specifies left adjusment of the output.
+: A “+” character specifies that there should always be a sign placed
before the number when using signed formats.
_: A space specifies that a blank should be left before before a positive
number for a signed format. A “+” overrides a space if both are used.
*v/v

# File tree:
ft_printf
--------libft/
S--------ft_printf_(cspdiuxX%).c
--------ft_printf.c
--------ft_prinf_utils.c(multi files)
--------ft_flag_().c(multi files)
--------ft_handler.c

# A structure:
-----type struct	s_utils
{   //all variable that needed to avoid repeat definitions
	int zero;
	int moin;
	int plus;
	int space;
	int width;
	int prici;
	char *len;
	char conversion;
}					t_utils
# Function orders:
1. Call function ft_printf
2. In (1) call function ft_hander.c(for handling diff conditions)

