#include "3-calc.h"

/**
 * op_add -adding function
 * @a: first input
 * @b: seconf input
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracting function
 * @a: first input
 * @b: second input
 * Return: difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul- multiplying function
 * @a: input a
 * @b: input b
 * Return: product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - dividing function
 * @a: input a
 * @b: input b
 * Return: quotient of a and b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulus function
 * @a: input a
 * @b: input b
 * Return: reminder of a and b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
