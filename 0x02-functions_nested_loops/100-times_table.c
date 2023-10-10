#include "main.h"


void print_times_table(int n)
{
	int i, j, k, m;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = i * j;
				m = k / 10;
				if (j == 0)
				{
					_putchar('0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					if (k > 99)
					{
						_putchar(k / 100 + '0');
						_putchar(m % 10 + '0');
						_putchar(k % 10 + '0');
					}
					else if (k > 9 && k < 100)
					{
						_putchar(' ');
						_putchar(k / 10 + '0');
						_putchar(k % 10 + '0');
					}
					else
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(k + '0');
					}
				}
			}
			_putchar('\n');
		}
	}
}
