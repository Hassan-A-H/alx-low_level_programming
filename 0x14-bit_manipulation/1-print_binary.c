#include "main.h"

/**
 * print_binary -  prints the binary representation of a number.
 * @n: the number to be printed in binary.
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int result = 0;
	unsigned long int place = 1;

	while (n)
	{
		if (n & 1)
			result = 1 * place + result;
		n >>= 1;
		place *= 10;
	}
	printf("%ld\n", result);
}
