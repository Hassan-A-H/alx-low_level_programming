#include "main.h"


/**
 * print_alphabet - print the lowercase alphabet followed by a newline.
 *
 * Descriprion:
 * This function prints the lowercase alphabet ('a' to 'z') followed by
 * a newline character ('\n') to the standard output.
 */
void print_alphabet(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		_putchar(c++);
	}
	_putchar('\n');
}
