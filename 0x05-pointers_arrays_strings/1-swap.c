/**
 * swap_int - function that swaps the values of two integers.
 * @a: is a pointer variable1.
 * @b:is a pointer variable2.
 * @*a, @*b: pointers parameter, variable datatype int.
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
