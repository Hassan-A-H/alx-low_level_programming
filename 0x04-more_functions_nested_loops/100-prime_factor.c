#include "main.h"

void largest_prime_factor(unsigned long n);

/**
 * main - Entry point of the program.
 *
 * Description:
 * The 'main' function serves as the entry point for the program.
 * It calls the 'largest_prime_factor' function to find and print the largest
 * prime factor of that number.
 *
 * Return:
 * Returns 0 upon successful execution.
 */

int main(void)
{
	largest_prime_factor(612852475143);
	return (0);
}

/**
 * largest_prime_factor - Find and print the largest prime factor of a number.
 * @n: The number for which to find the largest prime factor.
 *
 * Description:
 * This function calculates and prints the largest prime factor of the given
 * number 'n'. It employs a loop to iteratively divide 'n' by progressively
 * larger prime factors, and it keeps track of the largest prime factor found.
 * After completing the factorization, it prints the largest prime factor.
 *
 * Return:
 * This function does not return a value (void).
 */

void largest_prime_factor(unsigned long n)
{
	unsigned long i, largest_factor;

	largest_factor = 0;
	while (n % 2 == 0)
	{
		largest_factor = 2;
		n /= 2;
	}

	for (i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			largest_factor = i;
			n /= i;
		}
	}

	if (n > 2)
		largest_factor = n;

	printf("%lu\n", largest_factor);
}
