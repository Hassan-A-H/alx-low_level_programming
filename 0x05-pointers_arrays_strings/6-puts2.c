#include "main.h"

/**
 * puts2 - prints every other character of a string, starting with the first
 * character, followed by a new line.
 * @str: A pointer to the first character.
 *
 * Description: This function prints character and escape another starting
 * with the first character.
 *
 * Return: Nothing
 */

void puts2(char *str)
{
	while (*str != '\0')
	{
			_putchar(*str);
			str += 2;
	}
	_putchar('\n');
}
