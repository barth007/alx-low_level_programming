/**
 * reverse_array - reverse array elements
 * @a: array
 * @n: size of array
 */
void reverse_array(int *a, int n)
{
	int i, temp;


	for (i = 0; i < n / 2; i++)
	{
		n--;
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
