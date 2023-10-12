#include "main.h"

/**
 * print_numbers - Prints the numbers from 0 to 9.
 *
 * Description:
 * This function prints the numbers from 0 to 9, using the _putchar function.
 * It initializes a variable 'n' to 0 and iterates in a while loop until 'n'
 * reaches 10, printing each number and incrementing 'n' by 1.
 * After printing all the numbers, it prints a newline character.
 *
 * Parameters:
 * None.
 *
 * Return:
 * This function does not return a value (void).
 */

void print_numbers(void)
{
	int n;

	n = 0;
	while (n < 10)
		_putchar(n++ + '0');
	_putchar('\n');
}
