#include "main.h"

/**
 * print_last_digit - Prints the last digit of an integer
 *
 * @n: The integer whose last digit is to be printed
 *
 * Description:
 * This function takes an integer 'n' as input and prints the value
 * of its last digit (rightmost digit). It does so by taking the modulo
 * 10 of 'n' to extract the last digit.
 *
 * Return: The last digit of 'n'.
 */

int print_last_digit(int n)
{
	int result;

	if (n < 0)
		n *= -1;

	result = n % 10;
	_putchar(result + '0');
	return (result);
}
