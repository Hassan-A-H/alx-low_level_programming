#include "main.h"

/**
 * more_numbers - Prints numbers from 0 to 14 ten times.
 *
 * Description:
 * This function prints numbers from 0 to 14 ten times, creating a grid-like
 * pattern with two-digit numbers where the tens place is also displayed.
 * It uses nested loops to achieve this pattern. The outer loop iterates ten
 * times, and the inner loop iterates from 0 to 14 for each iteration of the
 * outer loop. The function prints each number, including the tens place if
 * it's greater than 9, and inserts newline characters
 * to separate the grid rows.
 *
 * Parameters:
 * None.
 *
 * Return:
 * This function does not return a value (void).
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j > 9)
			{
			_putchar(j / 10 + '0');
			}
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}
