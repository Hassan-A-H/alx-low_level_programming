#include "main.h"

/**
 * print_alphabet_x10 - print the lowercase alphabet ten times
 *
 * Description:
 * This function prints the lowercase alphabet ('a' to 'z') followed by
 * a newline character ('\n') to the standard output.
 */

void print_alphabet_x10(void)
{
	char c;
	int i;

	i = 0;
	while (i < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c++);
		}
		i++;
		_putchar('\n');
	}
}
