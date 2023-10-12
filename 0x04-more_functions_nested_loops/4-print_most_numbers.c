#include "main.h"

/**
 * print_most_numbers - Prints the numbers from 0 to 9 excluding 2 and 4.
 *
 * Description:
 * This function prints the numbers from 0 to 9, excluding 2 and 4.
 * It uses a while loop to iterate through the numbers and the _putchar
 * function to print each number. Numbers 2 and 4 are skipped using the
 * 'continue' statement. After printing the numbers, it prints a newline.
 *
 * Parameters:
 * None.
 *
 * Return:
 * This function does not return a value (void).
 */

void print_most_numbers(void)
{
	int n;

	n = 0;
	while (n < 10)
	{
		if (n == 2 || n == 4)
		{
			n++;
			continue;
		}

		_putchar(n++ + '0');
	}
	_putchar('\n');
}
