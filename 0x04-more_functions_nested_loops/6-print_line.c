#include "main.h"

/**
 * print_line - Prints a line of underscores.
 * @n: The number of underscores to print.
 *
 * Description:
 * This function prints a line of underscores, where the number of underscores
 * is determined by the parameter 'n'. If 'n' is greater than 0, it prints the
 * specified number of underscores. Otherwise, it simply prints a newline
 * character.
 *
 * Parameters:
 * @n: The number of underscores to print in the line.
 *
 * Return:
 * This function does not return a value (void).
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
