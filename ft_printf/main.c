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
