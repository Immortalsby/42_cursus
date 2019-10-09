// This is a verification file;

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

void	check_memset()
{
	char str1[] = "thisistest";
	char str2[] = "thisistest";
	char *nul1 = malloc(5);
	char *nul2 = malloc(5);
	int int1[] = {12,34};
	int int2[] = {12,34};
	memset(str1, '-', 3);
	ft_memset(str2, '-', 3);
	memset(nul1, '-', 10);
	ft_memset(nul2, '-', 10);
	memset(int1, '-', 1);
	ft_memset(int2, '-', 1);
	printf("-----Test for memset-----\n***Result for str:\"thisistest\", size 5, replace \'-\':\nMy:%s\nOri:%s\n***Result for nul str:\nMy:%s\nOri:%s\n***Result for int: 12, 34, replace 12 for -\nMy:%d\nOri:%d\n", str2, str1, nul2, nul1, int2[0], int1[0]);
}

void	check_bzero()
{
	char str1[] = "thisistest";
	char str2[] = "thisistest";
	char nul1[2] = "";
	char nul2[2] = "";
	int int1[] = {12,34};
	int int2[] = {12,34};
	bzero(str1, 3);
	ft_bzero(str2, 3);
	bzero(nul1, 2);
	ft_bzero(nul2, 2);
	bzero(int1, 1);
	ft_bzero(int2, 1);
	printf("-----Test for bzero-----\n***Result for str:\"thisistest\", size 5:\nMy:%s\nOri:%s\n***Result for nul str:\nMy:%s\nOri:%s\n***Result for int: 12, 34, replace 12\nMy:%d\nOri:%d\n", str2, str1, nul2, nul1, int2[0], int1[0]);
}


void	check_memcpy()
{
	char str1[10] = "thisis";
	char str2[10] = "test";
	char nul1[10] = "123";
	char nul2[2] = "";
	char nul3[2] = "";
	char nul4[10] = "123";
	char str3[10] = "test";
	char str4[10] = "thisis";
	char *res1, *res2, *res3, *res4;
	res1 = memcpy(str1, str2, 3);
	ft_memcpy(str1, str2, 3);
	res2 = memcpy(str3, str4, 2);
	ft_memcpy(str3, str4, 2);
	res3 = memcpy(nul1, nul2, 1);
	ft_memcpy(nul1, nul2, 1);
	res4 = memcpy(nul3, nul4, 1);
	ft_memcpy(nul3, nul4, 1);
	printf("-----Test for memcpy-----\n***Result for dest longger than src:\nMy:%s\nOri:%s\n***Result for src longger than dest:\nMy:%s\nOri:%s\n***Result when src is null:\nMy:%s\nOri:%s\n***Result when dest is null:\nMy:%s\nOri:%s\n", str1, res1, str3, res2, nul1, res3, nul3, res4);
}

void	check_memccpy()
{
	char str1[10] = "thisis";
	char str11[10] = "thisis";
	char str2[10] = "test";
	char nul1[10] = "123";
	char nul11[10] = "123";
	char nul2[2] = "";
	char nul3[2] = "";
	char nul33[2] = "";
	char nul4[10] = "123";
	char str3[10] = "test";
	char str33[10] = "test";
	char str4[10] = "thisis";
	char *res1, *res2, *res3, *res4, *res5, *res6, *res7, *res8;
	res1 = memccpy(str1, str2, 's', 3);
	res5 = ft_memccpy(str11, str2, 's', 3);
	res2 = memccpy(str3, str4, 's', 4);
	res6 = ft_memccpy(str33, str4, 's', 4);
	res3 = memccpy(nul1, nul2, 's', 2);
	res7 = ft_memccpy(nul11, nul2, 's', 2);
	res4 = memccpy(nul3, nul4, 's', 2);
	res8 = ft_memccpy(nul33, nul4, 's', 2);
	printf("-----Test for memccpy-----\n***Result for dest longger than src:\nMy:%s\nOri:%s\n***Result for src longger than dest:\nMy:%s\nOri:%s\n***Result when src is null:\nMy:%s\nOri:%s\n***Result when dest is null:\nMy:%s\nOri:%s\n", res5, res1, res6, res2, res7, res3, res8, res4);
}

void	check_memmove()
{
	char str1[] = "memmove can be very useful......";
	char str2[] = "memmove can be very useful......";
	char *res1, *res2;
	res1 = memmove(str1+20, str1+15, 11);
	res2 = ft_memmove(str2+20, str2+15, 11);
	printf("-----Test for memmove-----\n***Result for \'memmove can be very useful......\':\nMy dest:%s\nOri dest:%s\nMy str:%s\nOri str:%s\n", res2, res1, str2, str1);
}

void	check_memchr()
{
	char str1[] = "memchr can be very useful......";
	char str2[] = "memchr can be very useful......";
	char *res1, *res2;
	res1 = memchr(str1, 'a', ft_strlen(str1));
	res2 = ft_memchr(str2, 'a', ft_strlen(str2));
	printf("-----Test for memchr-----\n***Result for \'memmove can be very useful......\', in this str, the part after \'a\' is:\nMy:%s\nOri:%s\n", res2, res1);
}

void	check_memcmp()
{
	char str1[] = "memchr can be very useful......";
	char str2[] = "memchr can be very useful......";
	char str3[] = "memcmp not good";
	char str4[] = "memcmp is good";
	int res1, res2, res3, res4;
	res1 = memcmp(str1, str2, ft_strlen(str1));
	res2 = ft_memcmp(str1, str2, ft_strlen(str1));
	res3 = memcmp(str3, str4, ft_strlen(str4));
	res4 = ft_memcmp(str3, str4, ft_strlen(str4));
	printf("-----Test for memcmp-----\n***Result for \'memchr can be very useful......\':\nMy:%d\nOri:%d\n***Result for \'memcmp not good\' and\'memcmp is good\':\nMy:%d\nOri:%d\n", res2, res1, res4, res3);
}

void	check_strlen()
{
	char str1[2]="";
	char str2[] = "qwerty";
	char str3[100] = "666";
	printf("-----Test for strlen-----\n***Result1:\nMy:%lu\nOri:%lu\n***Result2:\nMy:%lu\nOri:%lu\n***Result3:\nMy:%lu\nOri:%lu\n", ft_strlen(str1), strlen(str1), ft_strlen(str2), strlen(str2), ft_strlen(str3), strlen(str3));
}

void	check_isalpha()
{
	printf("-----Test for isalpha-----\n***Result1:\nMy:%d\nOri:%d\n***Result2:\nMy:%d\nOri:%d\n***Result3:\nMy:%d\nOri:%d\n", ft_isalpha('4'), isalpha('4'), ft_isalpha('t'), isalpha('t'), ft_isalpha(';'), isalpha(';'));
}

void	check_isdigit()
{
	printf("-----Test for isdigit-----\n***Result1:\nMy:%d\nOri:%d\n***Result2:\nMy:%d\nOri:%d\n***Result3:\nMy:%d\nOri:%d\n", ft_isdigit('4'), isdigit('4'), ft_isdigit('t'), isdigit('t'), ft_isdigit(';'), isdigit(';'));
}

void	check_isalnum()
{
	printf("-----Test for isalnum-----\n***Result1:\nMy:%d\nOri:%d\n***Result2:\nMy:%d\nOri:%d\n***Result3:\nMy:%d\nOri:%d\n", ft_isalnum(-4), isalnum(-4), ft_isalnum('t'), isalnum('t'), ft_isalnum(';'), isalnum(';'));
}

void	check_isascii()
{
	printf("-----Test for isascii-----\n***Result1:\nMy:%d\nOri:%d\n***Result2:\nMy:%d\nOri:%d\n***Result3:\nMy:%d\nOri:%d\n", ft_isascii(-4), isascii(-4) ,ft_isascii('t'), isascii('t'), ft_isascii(';'), isascii(';'));
}

void	check_isprint()
{
	printf("-----Test for isprint-----\n***Result1:\nMy:%d\nOri:%d\n***Result2:\nMy:%d\nOri:%d\n***Result3:\nMy:%d\nOri:%d\n", ft_isprint(-4), isprint(-4), ft_isprint('t'), isprint('t'), ft_isprint(';'), isprint(';'));
}

void	check_toupper()
{
	printf("-----Test for toupper-----\n***Result1:\nMy:%d\nOri:%d\n***Result2:\nMy:%d\nOri:%d\n***Result3:\nMy:%d\nOri:%d\n", ft_toupper(-4), toupper(-4), ft_toupper('t'), toupper('t'), ft_toupper(';'), toupper(';'));
}

void	check_tolower()
{
	printf("-----Test for tolower-----\n***Result1:\nMy:%d\nOri:%d\n***Result2:\nMy:%d\nOri:%d\n***Result3:\nMy:%d\nOri:%d\n", ft_tolower(-4), tolower(-4), ft_tolower('t'), tolower('t'), ft_tolower(';'), tolower(';'));
}

void	check_strchr()
{
	char str1[]="www.boyuanshi.com";
	char str2[]="..yes..";
	printf("-----Test for strchr-----\n***Result1:\nMy:%s\nOri:%s\n***Result2:\nMy:%s\nOri:%s\n", ft_strchr(str1, '.'), strchr(str1, '.'), ft_strchr(str2, '.'), strchr(str2, '.'));
}

void	check_strrchr()
{
	char str1[]="www.boyuanshi.com";
	char str2[]="..yes..";
	printf("-----Test for strrchr-----\n***Result1:\nMy:%s\nOri:%s\n***Result2:\nMy:%s\nOri:%s\n", ft_strrchr(str1, '.'), strrchr(str1, '.'), ft_strrchr(str2, '.'), strrchr(str2, '.'));
}

void	check_strncmp()
{
	char str1[] = "memchr can be very useful......";
	char str2[] = "memchr can be very useful......";
	char str3[] = "memcmp is not good";
	char str4[] = "memcmp is good";
	int res1, res2, res3, res4;
	res1 = strncmp(str1, str2, 54);
	res2 = ft_strncmp(str1, str2, 54);
	res3 = strncmp(str3, str4, 11);
	res4 = ft_strncmp(str3, str4, 11);
	printf("-----Test for strncmp-----\n***Result for \'memchr can be very useful......\':\nMy:%d\nOri:%d\n***Result for \'memcmp not good\' and\'memcmp is good\':\nMy:%d\nOri:%d\n", res2, res1, res4, res3);
}

void	check_strlcat()
{
	char str1[123] = "123123123";
	char str2[123] = "qwerty";
	char str3[123] = "123123123";
	char str4[123] = "qwerty";
	printf("-----Test for strlcat-----\n***Result1:\nMy:%zu\nOri:%zu\n***Result2:\nMy:%zu\nOri:%zu\n", ft_strlcat(str1, str2, 12), strlcat(str3, str4, 12), ft_strlcat(str2, str1, 15), strlcat(str4, str3, 15));
}

void	check_strlcpy()
{
	char str1[123] = "123123123";
	char str2[123] = "qwerty";
	char str3[123] = "123123123";
	char str4[123] = "qwerty";
	printf("-----Test for strlcpy-----\n***Result1:\nMy:%zu\nOri:%zu\n***Result2:\nMy:%zu\nOri:%zu\n", ft_strlcpy(str1, str2, 12), strlcpy(str3, str4, 12), ft_strlcpy(str2, str1, 15), strlcpy(str4, str3, 15));
}

void	check_strnstr()
{
	char str1[123]="lorem ipsum dolor sit amet";
	char str2[123] = "dolor";
	char str3[123]="";
	char str4[123] = "!@#$";
	printf("-----Test for strnstr-----\n***Result1:\nMy:%s\nOri:%s\n***Result2:\nMy:%s\nOri:%s\n***Result3:\nMy:%s\nOri:%s\n***Result4:\nMy:%s\nOri:%s\n", ft_strnstr(str1, "dolor", 15), strnstr(str1, "dolor", 15), ft_strnstr(str2, "ty", 10), strnstr(str2, "ty", 10), ft_strnstr(str3, "", 10), strnstr(str3, "", 10), ft_strnstr(str4, "#", 3), strnstr(str4, "#", 3));
}

void	check_atoi()
{
	printf("-----Test for atoi-----\n***Result1:\nMy:%d\nOri:%d\n***Result2:\nMy:%d\nOri:%d\n***Result3:\nMy:%d\nOri:%d\n", ft_atoi("123"), atoi("123"), ft_atoi("abc"), atoi("abc"), ft_atoi("21147483648"), ft_atoi("21147483648"));
}

void	check_calloc()
{
	printf("-----Test for calloc-----\n***Result1:\nMy:%s\nOri:%s\n***Result2:\nMy:%s\nOri:%s\n***Result3:\nMy:%s\nOri:%s\n", (char *)ft_calloc(4, 9), (char *)calloc(4, 9), (char *)ft_calloc(9, 4), (char *)calloc(9, 4), (char *)ft_calloc(9, 9), (char *)calloc(9, 9));
}

void	check_strdup()
{
	char str1[] = "memchr can be very useful......";
	char str2[] = "memcmp not good";
	char *str3 = "memcmp is good";
	char *res1, *res2, *res3, *res4, *res5, *res6;
	res1 = strdup(str1);
	res2 = ft_strdup(str1);
	res3 = strdup(str2);
	res4 = ft_strdup(str2);
	res5 = strdup(str3);
	res6 = strdup(str3);
	printf("-----Test for strdup-----\n***Result1:\nMy:%s\nOri:%s\n***Result2:\nMy:%s\nOri:%s\n***Result3:\nMy:%s\nOri:%s\n", res2, res1, res4, res3, res6, res5);
}

void check_substr()
{	
	printf("-----Test for substr-----\n***Result1 for qwertyuiop, start with r, len: 5:\n%s\n***Result2 for qwertyuiop, start with p, len: 5:\n%s\n***Result3 for qwertyuiop, start with q, len: 100:\n%s\n", ft_substr("qwertyuiop", 3, 5), ft_substr("qwertyuiop", 9, 5), ft_substr("qwertyuiop", 0, 100));
}

void check_strjoin()
{
	printf("-----Test for substr-----\n***Result1 for qwertyuiop and 123:\n%s\n***Result2 for NULL and nothingbefore:\n%s\n***Result3 for nothingbehind and NULL:\n%s\n", ft_strjoin("qwertyuiop", "123"), ft_strjoin("", "nothingbefore"), ft_strjoin("nothingbehind", ""));
}

void check_strtrim()
{
	printf("-----Test for strtrim-----\n***Result1 for 1234***1234 and 123:\n%s\n***Result2 for pppp and 12345p:\n%s\n***Result3 for yu yu yu and 9\t:\n%s\n", ft_strtrim("1234***1234", "123"), ft_strtrim("pppp", "123456p"), ft_strtrim("yu yu yu", "9\t"));
}

void check_strsplit()
{
	int i = 0;
	printf("-----Test for split-----\n***Result for \' qwe rfty uif op\' and \' \':\n");
	for (i = 0; i < 6; i++)
		printf("%s\n", ft_split("     qwe rfty uif    op", ' ')[i]);
}

void check_itoa()
{
	printf("-----Test for itoa-----\n***Result1 for 2147483647:\n%s\n***Result2 for -2147483648:\n%s\n***Result3 for -0\t:\n%s\n", ft_itoa(2147483647), ft_itoa(-2147483648), ft_itoa(-0));
}

char mapi(unsigned int i, char c)
{
	static	int	index[12] = {0};

	if (i > 11 || index[i] == 1)
		write(1, "wrong index\n", 12);
	else
		index[i] = 1;
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else if (c > 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

void check_strmapi()
{
	printf("-----Test for strmapi-----\n***Result for \'qWeRtYu IoP \', every char will change states of min/maj:\n%s\n", ft_strmapi("qWeRtYu IoP ", &mapi));
}

void check_putcharfd()
{
	int fd;
	char d[128] = {0};
	fd = open("test_putstr", O_RDWR|O_CREAT|O_TRUNC, S_IRUSR | S_IWUSR);
	ft_putchar_fd('w', fd);
	close(fd);
	fd = open("test_putstr", O_RDONLY);
	read(fd, d, 128);
	printf("-----Test for putcharfd-----\n***Wrote \'w\' to file test, read file test:\n%s\n", d);
	close(fd);
	unlink("test_putstr");
}

void check_putstrfd()
{
	int fd;
	char d[100] = {0};
	fd = open("test_putstr", O_RDWR|O_CREAT|O_TRUNC, S_IRUSR | S_IWUSR);
	ft_putstr_fd("abcde", fd);
	close(fd);
	fd = open("test_putstr", O_RDONLY);
	read(fd, d, 100);
	printf("-----Test for putstrfd-----\n***Wrote \'w\' to file test, read file test:\n%s\n", d);
	close(fd);
	unlink("test_putstr");
}

void check_putendlfd()
{
	int fd;
	char d[100] = {0};
	fd = open("test_putstr", O_RDWR|O_CREAT|O_TRUNC, S_IRUSR | S_IWUSR);
	ft_putendl_fd("abcde", fd);
	close(fd);
	fd = open("test_putstr", O_RDONLY);
	read(fd, d, 100);
	printf("-----Test for putendlfd-----\n***Wrote \'w\' to file test, read file test:\n%s\n", d);
	close(fd);
	unlink("test_putstr");
}

void check_putnbrfd()
{
	int fd;
	char d[100] = {0};
	fd = open("test_putstr", O_RDWR|O_CREAT|O_TRUNC, S_IRUSR | S_IWUSR);
	ft_putnbr_fd(-2147483648, fd);
	close(fd);
	fd = open("test_putstr", O_RDONLY);
	read(fd, d, 100);
	printf("-----Test for putnbrfd-----\n***Wrote \'w\' to file test, read file test:\n%s\n", d);
	close(fd);
	unlink("test_putstr");
}

void check_lstnew()
{
	t_list *new;
	void	*d;

	d = (void *)"hello";
	new = ft_lstnew(d);
	printf("-----Test for lstnew-----\n***Create a new list with content \'hello\', and next NULL:\nContent:\n%s\n", new->content);
}

void check_lstaddfront()
{
	t_list *new;
	t_list *new2;
	void	*d;
	void	*d2;

	d = (void *)"hello";
	d2 = (void *)"world";
	new = ft_lstnew(d2);
	printf("-----Test for lstAddFront-----\n***Create a new list with content \'world\', and next NULL:\nContent of first ele:\n%s\n", new->content);
	new2 = ft_lstnew(d);
	ft_lstadd_front(&new, new2);
	printf("***Add a new list with content \'hello\' in front\nContent of first ele:\n%s\n", new2->content);
}

void check_lstsize()
{
	t_list *new;
	t_list *new2;
	void	*d;
	void	*d2;

	d = (void *)"hello";
	d2 = (void *)"world";
	new = ft_lstnew(d2);
	printf("-----Test for lstsize-----\n***Create a new list with content \'world\', and next NULL:\nSize of list:\n%d\n", ft_lstsize(new));
	new2 = ft_lstnew(d);
	ft_lstadd_front(&new, new2);
	printf("***Add a new list with content \'hello\' in front\nSize of list:\n%d\n", ft_lstsize(new2));
}

void check_lstlast()
{
	t_list *new;
	t_list *new2;
	void	*d;
	void	*d2;

	d = (void *)"hello";
	d2 = (void *)"world";
	new = ft_lstnew(d2);
	printf("-----Test for lstlast-----\n***Create a new list with content \'world\', and next NULL:\nLast ele of list:\n%s\n", ft_lstlast(new)->content);
	new2 = ft_lstnew(d);
	ft_lstadd_front(&new, new2);
	printf("***Add a new list with content \'hello\' in front\nLast ele of list:\n%s\n", ft_lstlast(new2)->content);
}

void check_lstaddback()
{
	t_list *new;
	t_list *new2;
	void	*d;
	void	*d2;

	d = (void *)"hello";
	d2 = (void *)"world";
	new = ft_lstnew(d2);
	printf("-----Test for lstAddBack-----\n***Create a new list with content \'world\', and next NULL:\nLast ele of list:\n%s\n", ft_lstlast(new)->content);
	new2 = ft_lstnew(d);
	ft_lstadd_back(&new, new2);
	printf("***Add a new list with content \'hello\' in back\nLast ele of list:\n%s\n", ft_lstlast(new)->content);
}

void del_delone(void *content)
{
	content=NULL;
}

void check_lstdelone()
{
	t_list *new;
	t_list *new2;
	t_list *new3;
	void	*d;
	void	*d2;
	void	*d3;

	d = (void *)malloc(6);
	d2 = (void *)malloc(6);
	d3 = (void *)malloc(6);
	memcpy(d,"hello",5);
	memcpy(d2,"world",5);
	memcpy(d3,"my",2);
	new = ft_lstnew(d2);
	printf("-----Test for lstdelone-----\n***Create a new list with content \'world\', and next NULL:\nLast ele of list:\n%s\n", ft_lstlast(new)->content);
	new2 = ft_lstnew(d);
	ft_lstadd_back(&new, new2);
	printf("***Add a new list with content \'hello\' in back\nLast ele of list:\n%s\n", ft_lstlast(new)->content);
	new3 = ft_lstnew(d3);
	ft_lstadd_back(&new, new3);
	printf("***Add a new list with content \'my\' in back\nLast ele of list:\n%s\n", ft_lstlast(new)->content);
	ft_lstdelone(new2, &del_delone);
	printf("***Del the last one:\n%s\n", ft_lstlast(new)->content);
	printf("***Whole list:\n%s--%s--%s\n", new->content, new2->content, new3->content);
}

int	main()
{
/*	check_memset();
	check_bzero();
	check_memcpy();
	check_memccpy();
	check_memmove();
	check_memchr();
	check_memcmp();
	check_strlen();
	check_isalpha();
	check_isdigit();
	check_isalnum();
	check_isascii();
	check_isprint();
	check_toupper();
	check_tolower();
	check_strchr();
	check_strrchr();
	check_strncmp();
	check_strlcat();
	check_strlcpy();
	check_strnstr();
	check_atoi();
	check_calloc();
	check_strdup();
	check_substr();
	check_strjoin();
	check_strtrim();
	check_strsplit();
	check_itoa();
	check_strmapi();
	check_putcharfd();
	check_putstrfd();
	check_putendlfd();
	check_putnbrfd();
	check_lstnew();
	check_lstaddfront();*/
	check_lstsize();
	check_lstlast();
	check_lstaddback();
	check_lstdelone();
	return (0);
}
