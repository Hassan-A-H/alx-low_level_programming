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
	int i;

	i = 0;
	while (str[i] != '\0')
	{
			_putchar(str[i]);
			i += 2;
	}
	_putchar('\n');
}
