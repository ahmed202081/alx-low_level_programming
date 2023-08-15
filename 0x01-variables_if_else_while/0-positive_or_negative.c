#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - entry point
*
* Description: false or true validaion
*
* Return : 0 (success)
*/
int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	printf("%d is ", n);

	if (n > 0)
	printf("positive\n");
	else if (n == 0)
	printf("zero\n");
	else
	printf("negative\n");
	/** Indicate successful execution of the program */
	return (0);
}
