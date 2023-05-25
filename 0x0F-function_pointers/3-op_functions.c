#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - adds two ints
 * @a: int a
 * @b: int b
 * Return: sum of the two numbers
 **/
 
 int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts
 * @a: int a
 * @b: int b
 * Return: difference of int
 */
 
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two numbers
 * @a: int a
 * @b: int b
 * Return: multiplication of int
 **/
 
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division
 * @a: int a
 * @b: int b
 * Return: division of int
 */
 
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculates mod of two ints
 * @a: int a
 * @b: int b
 * Return: mod of int
 **/
 
int op_mod(int a, int b)
{
	if (b == 0)
		return (-1);
	return (a % b);
}
