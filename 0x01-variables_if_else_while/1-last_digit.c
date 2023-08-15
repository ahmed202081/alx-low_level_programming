#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - entry point
*
* Description: print the value of n status:
*		grater than, is zero and is not less than 6.
*
* Return: 0 (success)
*/
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last_digit = abs(n % 10);

	printf("Last digit of %d is %d ", n, (n < 0) ? -last_digit : last_digit);

	if (last_digit > 5)
	printf("and is greater than 5\n");
	else if (last_digit < 6 && last_digit != 0)
	printf("and is less than 6 and not 0\n");
	else
	printf("and is 0\n");

	/** Indicate successful execution of the program */
	return (0);
}
