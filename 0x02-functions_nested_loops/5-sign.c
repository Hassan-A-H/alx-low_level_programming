#include "main.h"


/**
 * print_sign - Prints the sign of an integer
 *
 * @n: The integer to be checked
 *
 * Description:
 * This function takes an integer 'n' as input and checks its sign.
 * If 'n' is greater than 0, it prints '+' and returns 1.
 * If 'n' is equal to 0, it prints '0' and returns 0.
 * If 'n' is less than 0, it prints '-' and returns -1.
 *
 * Return:
 * 1 if 'n' is positive, 0 if 'n' is zero, -1 if 'n' is negative.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0 + '0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
