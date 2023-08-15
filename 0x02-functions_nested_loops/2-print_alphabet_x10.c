/*
 * File: 2-print_alphabet_x10.c
 * Author: [Your Name]
 * Description: This program defines a function that prints the lowercase alphabet 10 times,
 *              each followed by a new line.
 */

#include "main.h"

/**
 * print_alphabet_x10 - Prints the lowercase alphabet 10 times, each followed by a new line.
 */
	void print_alphabet_x10(void)
{
	int i;
	char letter;

	for (i = 0; i < 10; i++)
	{
	letter = 'a';

	while (letter <= 'z')
	{
	_putchar(letter);
	letter++;
	}

	_putchar('\n');
	}
}

	int main(void)
{
	print_alphabet_x10();
	return (0);
}
