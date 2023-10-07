#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program, evaluates a random number and prints it.
 *
 * Description:
 * This C program generates a random integer, evaluates whether it is positive,
 * zero, or negative,
 * and then prints the result to the standard output (stdout).
 *
 * Return:
 * The program returns 0 to indicate successful execution.
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);

	return (0);
}
