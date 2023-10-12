#include "main.h"

/**
 * print_diagonal - Prints a diagonal line of backslashes.
 * @n: The number of backslashes to print.
 *
 * Description:
 * This function prints a diagonal line of backslashes, starting with one
 * backslash and increasing the number of backslashes with each row.
 * The parameter 'n' determines the number of backslashes in the diagonal.
 * If 'n' is 0 or less, it prints a newline.
 *
 * Parameters:
 * @n: The number of backslashes to print in the diagonal.
 *
 * Return:
 * This function does not return a value (void).
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j <= i; j++)
			{
				if (j == i)
					_putchar('\\');
				else
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
