#include <stdio.h>

int main(){

	int str=+42;
	printf("%+04d", str);
	printf("\n");
	printf("%-+04d", str);
	return (0);
}
