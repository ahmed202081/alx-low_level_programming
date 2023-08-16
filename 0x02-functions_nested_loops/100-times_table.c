#include "main.h"
#include <stdio.h>

/**
 * print_times_table - Print the n times table.
 * @n: The number for which to print the times table.
 */
	void print_times_table(int n)
{
	if (n < 0 || n > 15)
	return;

	int row, column, product;

	for (row = 0; row <= n; row++)
	{
	for (column = 0; column <= n; column++)
	{
	product = row * column;

	if (column != 0)
	{
	printf(", ");
	if (product < 100)
	printf(" ");
	if (product < 10)
	printf(" ");
	}

	if (product >= 100)
	printf("%d", product);
	else if (product >= 10)
	printf(" %d", product);
	else
	printf("  %d", product);
	}
	printf("\n");
	}
}
