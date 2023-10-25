#include "main.h"

/**
 * _print_rev_recursio - prints a string in reverse. followed by new line.
 * @s: character to be printed.
 * Return: Nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
