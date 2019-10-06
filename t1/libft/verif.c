// This is a verification file;

#include "libft.h"
#include <stdio.h>

void	check_memset()
{
	char str1[] = "thisistest";
	char str2[] = "thisistest";
	char nul1[2] = "";
	char nul2[2] = "";
	int int1[] = {12,34};
	int int2[] = {12,34};
	memset(str1, '-', 3);
	ft_memset(str2, '-', 3);
	memset(nul1, '-', 1);
	ft_memset(nul2, '-', 1);
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

void	check_strlen()
{
	char str1[2]="";
	char str2[] = "qwerty";
	char str3[100] = "666";
	printf("-----Test for strlen-----\n***Result1:\nMy:%lu\nOri:%lu\n***Result2:\nMy:%lu\nOri:%lu\n***Result3:\nMy:%lu\nOri:%lu\n", ft_strlen(str1), strlen(str1), ft_strlen(str2), strlen(str2), ft_strlen(str3), strlen(str3));
}

void	check_strcpy()
{
	char str1[10]="";
	char str2[] = "qwerty";
	char str3[10]="";
	char str4[] = "qwerty";
	printf("-----Test for strcpy-----\n***Result1:\nMy:%s\nOri:%s\n***Result2:\nMy:%s\nOri:%s\n", ft_strcpy(str1, str2), strcpy(str3, str4), ft_strcpy(str2, str1), strcpy(str4, str3));
}

void	check_strncpy()
{
	char str1[10]="123123123";
	char str2[] = "qwerty";
	char str3[10]="123123123";
	char str4[] = "qwerty";
	printf("-----Test for strncpy-----\n***Result1:\nMy:%s\nOri:%s\n***Result2:\nMy:%s\nOri:%s\n", ft_strncpy(str1, str2, 4), strncpy(str3, str4, 4), ft_strncpy(str2, str1, 2), strncpy(str4, str3, 2));
}

void	check_strcat()
{
	char str1[123]="123123123";
	char str2[123] = "qwerty";
	char str3[123]="123123123";
	char str4[123] = "qwerty";
	printf("-----Test for strcat-----\n***Result1:\nMy:%s\nOri:%s\n***Result2:\nMy:%s\nOri:%s\n", ft_strcat(str1, str2), strcat(str3, str4), ft_strcat(str2, str1), strcat(str4, str3));
}

void	check_strncat()
{
	char str1[123]="123123123";
	char str2[123] = "qwerty";
	char str3[123]="123123123";
	char str4[123] = "qwerty";
	printf("-----Test for strncat-----\n***Result1:\nMy:%s\nOri:%s\n***Result2:\nMy:%s\nOri:%s\n", ft_strncat(str1, str2, 3), strncat(str3, str4, 3), ft_strncat(str2, str1, 4), strncat(str4, str3, 4));
}

void	check_strlcat()
{
	char str1[123]="123123123";
	char str2[123] = "qwerty";
	char str3[123]="123123123";
	char str4[123] = "qwerty";
	printf("-----Test for strlcat-----\n***Result1:\nMy:%zu\nOri:%zu\n***Result2:\nMy:%zu\nOri:%zu\n", ft_strlcat(str1, str2, 12), strlcat(str3, str4, 12), ft_strlcat(str2, str1, 15), strlcat(str4, str3, 15));
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

void	check_strstr()
{
	char str1[123]="123123123";
	char str2[123] = "qwerty";
	char str3[123]="";
	char str4[123] = "!@#$";
	printf("-----Test for strstr-----\n***Result1:\nMy:%s\nOri:%s\n***Result2:\nMy:%s\nOri:%s\n***Result3:\nMy:%s\nOri:%s\n***Result4:\nMy:%s\nOri:%s\n", ft_strstr(str1, "23"), strstr(str1, "23"), ft_strstr(str2, "23"), strstr(str2, "23"), ft_strstr(str3, ""), strstr(str3, ""), ft_strstr(str4, "#"), strstr(str4, "#"));
}

void	check_strnstr()
{
	char str1[123]="123123123";
	char str2[123] = "qwerty";
	char str3[123]="";
	char str4[123] = "!@#$";
	printf("-----Test for strnstr-----\n***Result1:\nMy:%s\nOri:%s\n***Result2:\nMy:%s\nOri:%s\n***Result3:\nMy:%s\nOri:%s\n***Result4:\nMy:%s\nOri:%s\n", ft_strnstr(str1, "23", 3), strnstr(str1, "23", 3), ft_strnstr(str2, "ty", 10), strnstr(str2, "ty", 10), ft_strnstr(str3, "", 10), strnstr(str3, "", 10), ft_strnstr(str4, "#", 3), strnstr(str4, "#", 3));
}

void	check_strcmp()
{
	char str1[] = "memchr can be very useful......";
	char str2[] = "memchr can be very useful......";
	char str3[] = "memcmp is not good";
	char str4[] = "memcmp is good";
	int res1, res2, res3, res4;
	res1 = strcmp(str1, str2);
	res2 = ft_strcmp(str1, str2);
	res3 = strcmp(str3, str4);
	res4 = ft_strcmp(str3, str4);
	printf("-----Test for strcmp-----\n***Result for \'memchr can be very useful......\':\nMy:%d\nOri:%d\n***Result for \'memcmp not good\' and\'memcmp is good\':\nMy:%d\nOri:%d\n", res2, res1, res4, res3);
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

int	main()
{
	check_memset();
	check_bzero();
	check_memcpy();
	check_memccpy();
	check_memmove();
	check_memchr();
	check_memcmp();
	check_strdup();
	check_strlen();
	check_strcpy();
	check_strncpy();
	check_strcat();
	check_strncat();
	check_strlcat();
	check_strchr();
	check_strrchr();
	check_strstr();
	check_strnstr();
	check_strcmp();
	check_strncmp();
	return (0);
}
