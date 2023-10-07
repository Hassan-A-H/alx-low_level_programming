#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program, evaluates the last digit of a random
 *
 * Description:
 * This C program generates a random integer, evaluates its last digit,
 * and prints a message indicating whether the last digit is greater than 5,
 * equal to 0, or less than 6 and not equal to 0 to the standard output (stdout)
 * Return:
 * The program returns 0 to indicate successful execution.
 */

int main(void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;

	if (last > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last);
	else if (last == 0)
		printf("Last digit of %d is %d and is 0\n", n, last);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);

	return (0);
}
