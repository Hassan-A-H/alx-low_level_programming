#include "main.h"


/**
 * times_table - Prints the multiplication table for numbers 0 to 9
 *
 * Description:
 * This function prints a multiplication table for numbers 0 to 9,
 * displaying the result of multiplying each pair of numbers in a
 * well-formatted grid. It uses nested loops to calculate the products
 * and ensures proper alignment of the numbers with commas and spaces.
 * Each row of the table is terminated with a newline character ('\n').
 */

void times_table(void)
{
	int i, j, result;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			result = i * j;
			if (j == 0)
			{
				_putchar(result + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				if (result < 10)
				{
					_putchar(' ');
					_putchar(result + '0');
				}
				else
				{
					_putchar(result / 10 + '0');
					_putchar(result % 10 + '0');
				}
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
