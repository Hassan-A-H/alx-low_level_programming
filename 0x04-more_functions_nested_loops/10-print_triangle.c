#include "main.h"

/**
 * print_triangle - Prints a right-angled triangle of '#' characters.
 * @size: The size of the triangle.
 *
 * Prints a right-angled triangle made of '#' characters. The size
 * of the triangle is determined by the 'size' parameter. If 'size' is
 * greater than 0, it prints a right-angled triangle with 'size' rows.
 * For 'size' values less than or equal to 0, it prints a newline.
 */

void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j < size - i - 1)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
