#include "main.h"


/**
 * print_times_table - Prints a multiplication table for numbers 0 to n
 *
 * @n: The maximum value for the table (0 to 15)
 *
 * Description:
 * This function prints a well-formatted multiplication table for numbers
 * from 0 to 'n', inclusive. It checks if 'n' is within the valid range
 * and prints the table accordingly.
 */

void print_times_table(int n)
{
	int i, j, result;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				result = i * j;
				if (j == 0)
					_putchar('0');
				else
				{
					_putchar(',');
					_putchar(' ');
					if (result > 99)
					{
						_putchar(result / 100 + '0');
						_putchar((result / 10) % 10 + '0');
						_putchar(result % 10 + '0');
					}
					else if (result > 9 && result < 100)
					{
						_putchar(' ');
						_putchar(result / 10 + '0');
						_putchar(result % 10 + '0');
					}
					else
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(result + '0');
					}
				}
			}
			_putchar('\n');
		}
	}
}
