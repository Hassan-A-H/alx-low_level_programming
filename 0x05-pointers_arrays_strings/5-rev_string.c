#include "main.h"

/**
 * rev_string - Prints a string, in reverse, followed by a new line.
 * @s: A pointer to the first character.
 *
 * Description: This function prints the string in reverse followed by
 * a new line.
 *
 * Return: Nothing.
 */

void rev_string(char *s)
{
	int str_len, i;

	str_len = 0;
	while (s[str_len] != '\0')
		str_len++;

	for (i = str_len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
