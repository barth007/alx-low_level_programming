#include "3-calc.h"
/**
 * op_add - sum of a and b
 * @a: first argument operand
 * @b: second argument operand
 * Return: sum
**/
int op_add(int a, int b)
{
	int sum;

	sum = a + b;
	return (sum);
}
/**
 * op_sub - difference of a and b
 * @a: first argument operand
 * @b: second argument operand
 * Return: difference between two operands
**/
int op_sub(int a, int b)
{
	int sub;

	sub = a - b;
	return (sub);
}
/**
 * op_mul - multiplication of two operands
 * @a: first argument operand
 * @b: second argument operand
 * Return: multiplication of the input
**/
int op_mul(int a, int b)
{
	int mul;

	mul = a * b;
	return (mul);
}
/**
 * op_div - division of two operands
 * @a: first argument operand
 * @b: second argument operand
 * Return: a/b
**/
int op_div(int a, int b)
{
	int div;

	div = a / b;
	return (div);
}
/**
 * op_mod - the remainder of the division of a by b
 * @a: first argument operand
 * @b: second argument operand
 * Return: a%b;
**/
int op_mod(int a, int b)
{
	int mod;

	mod = a % b;
	return (mod);
}
