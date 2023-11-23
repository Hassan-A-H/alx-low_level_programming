#include "main.h"

/**
 * flip_bits - flip to get from one number to another.
 * @n: the first number
 * @m: the second number
 * Return: the number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int sum;
	unsigned int count = 0;

	sum = n ^ m;

	while (sum)
	{
		if (sum & 1)
			count++;
		sum >>= 1;
	}
	return (count);
}
