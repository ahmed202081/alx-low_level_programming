#include "main.h"
#include <stdio.h>

/**
 * _abs - Compute the absolute value of an integer.
 * @n: The integer to compute the absolute value for.
 *
 * Return: The absolute value of n.
 */
	int _abs(int n)
{
	return (n < 0 ? -n : n);
}

/**
 * main - Check the _abs function.
 *
 * Return: Always 0.
 */
	int main(void)
{
	int r;

	r = _abs(-1);
	printf("%d\n", r);
	r = _abs(0);
	printf("%d\n", r);
	r = _abs(1);
	printf("%d\n", r);
	r = _abs(-98);
	printf("%d\n", r);
	return (0);
}
