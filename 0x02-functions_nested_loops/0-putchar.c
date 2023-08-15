#include <stdio.h>
#include <unistd.h>

/**
* File: 0-putchar.c
* Author: [Your Name]
* Description: This program prints "_putchar" followed by a new line.
* Return: 0 (success)
*/
#ifndef MAIN_H
#define MAIN_H
	int _putchar(char c)
#endif /* MAIN_H */
{
	return write(1, &c, 1);
}

	int main(void)
{
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');

	return (0);
}
