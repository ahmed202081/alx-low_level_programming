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

	srand(time(0));
	n = rand();

	int last_digit = n % 10;

	printf("Last digit of %d is %d ", n, last_digit);

	if (last_digit > 5)
	printf("and is greater than 5\n");
	else if (last_digit == 0)
	printf("and is 0\n");
	else
	printf("and is less than 6 and not 0\n");
	/** Indicate successful execution of the program */
	return (0);
}
