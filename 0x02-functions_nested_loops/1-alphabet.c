/*
 * File: 1-alphabet.c
 * Author: [Your Name]
 * Description: This program defines a function that prints the lowercase alphabet followed by a new line.
 */

#include "main.h"

/**
 * print_alphabet - Prints the lowercase alphabet followed by a new line.
 */
	void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
	_putchar(letter);
	letter++;
}	

	_putchar('\n');
}

	int main(void)
{
	print_alphabet();
	return (0);
}
