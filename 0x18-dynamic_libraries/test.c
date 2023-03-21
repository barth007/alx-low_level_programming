#include "main.h"
#include <stdio.h>

int main()
{
	int a, b, addition, substraction, division, modules, multiplication;

	a = 4;
	b = 2;
	addition = add(a, b);
	substraction = sub(a, b);
	division = divi(a, b);
	modules = mod(a, b);
	multiplication = mul(a, b);
	printf("addition = %d\n", addition);
	printf("substraction = %d\n", substraction);
	printf("division = %d\n", division);
	printf("modules = %d\n", modules);
	printf("multiplication = %d\n", multiplication);
	return (0);
}
