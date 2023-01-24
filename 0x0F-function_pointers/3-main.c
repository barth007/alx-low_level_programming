#include "3-calc.h"
/**
 * main- entry point
 * @argc: argument count for the array
 * @argv: argument vector array
 * Return: Always 0
**/
int main(int argc, char *argv[])
{
	int num1, num2;
	op_t call_func;
	char *ar[2] = {"/", "%"};

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if (num2 == 0 && (strcmp(argv[2], ar[0]) == 0 || strcmp(argv[2], ar[1]) == 0))
	{
		printf("Error\n");
		return (100);
	}
	call_func.f = get_op_func(argv[2]);
	if (!call_func.f)
	{
		printf("Error\n");
		return (99);
	}
	printf("%d\n", call_func.f(num1, num2));
	return (0);

}
