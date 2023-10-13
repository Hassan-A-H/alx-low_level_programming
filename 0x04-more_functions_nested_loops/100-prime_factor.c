#include "main.h"

void largest_prime_factor(unsigned long n);

int main(void)
{
	largest_prime_factor(612852475143);
	return (0);
}

void largest_prime_factor(unsigned long n)
{
	unsigned long i, largest_factor;

	largest_factor = 0;
	while (n % 2 == 0)
	{
		largest_factor = 2;
		n /= 2;
	}

	for(i = 3; i <= sqrt(n); i += 2)
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
