#include "main.h"


/**
 * jack_bauer - Prints all possible times on a 24-hour clock
 *
 * Description:
 * This function prints all the possible times on a 24-hour clock
 * in the format "HH:MM," where HH represents the hour (00-23)
 * and MM represents the minutes (00-59). It uses nested loops to
 * iterate through all possible combinations of hours and minutes
 * and uses the _putchar function to display each digit individually.
 * A newline character ('\n') is printed after each time to separate
 * them.
 */

void jack_bauer(void)
{
	int i, j, r1, r2, r3, r4;

	i = 0;
	while (i < 24)
	{
		r1 = i / 10;
		r2 = i % 10;

		j = 0;
		while (j < 60)
		{
			r3 = j / 10;
			r4 = j % 10;
			_putchar(r1 + '0');
			_putchar(r2 + '0');
			_putchar(':');
			_putchar(r3 + '0');
			_putchar(r4 + '0');
			_putchar('\n');
			j++;
		}
		i++;
	}
}
