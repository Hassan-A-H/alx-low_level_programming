#include "main.h"


/**
 * _puts - prints a string followed by new line.
 * @str: a pointer to the first charcter in the string.
 *
 * Description: iterates through the string and prints each character
 * at the end prints new line.
 *
 * Return: Nothing
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
