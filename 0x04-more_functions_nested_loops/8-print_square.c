#include "main.h"

/**
 * print_square - Prints a square made of '#' characters.
 * @size: The size of the square to be printed.
 *
 * Description:
 * This function prints a square made of '#' characters, where the size of the
 * square is determined by the parameter 'size'. If 'size' is greater than 0,
 * it prints a square with 'size' rows and 'size' columns of '#' characters.
 * If 'size' is 0 or less, it simply prints a newline character.
 *
 * Parameters:
 * @size: The size of the square to be printed.
 *
 * Return:
 * This function does not return a value (void).
 */

void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
