#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 *
 * @n: The integer to find the absolute value of
 *
 * Description:
 * This function takes an integer 'n' as input and computes its absolute
 * value. If 'n' is negative, it returns its negation (positive value),
 * otherwise, it returns 'n' itself.
 *
 * Return: The absolute value of 'n'.
 */

int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
}
