#include "main.h"

/**
 * print_sign - Print the sign of a number.
 * @n: The number to be checked.
 *
 * Return: 1 if n is greater than zero, 0 if n is zero, -1 if n is less than zero.
 */
	int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return 1;
	}
	else if (n == 0)
	{
	_putchar('0');
	return 0;
	}
	else
	{
	_putchar('-');
	return -1;
	}
}

/**
 * main - Check the print_sign function.
 *
 * Return: Always 0.
 */
	int main(void)
{
	int r;

r = print_sign(98);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');
	r = print_sign(0);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');
	r = print_sign(0xff);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');
	r = print_sign(-1);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
