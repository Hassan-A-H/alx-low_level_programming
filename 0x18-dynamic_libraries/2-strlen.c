#include "main.h"

/**
 * _strlen - Calculate the length of a string.
 * @s: A pointer to the first character of the string.
 *
 * This function iterates through the string and increments the length
 * count until it encounters the null terminator ('\0') character.
 *
 * Return: The length of the string (number of characters).
 */

int _strlen(char *s)
{
	int str_len;

	str_len = 0;
	while (*s != '\0')
	{
		str_len++;
		s++;
	}
	return (str_len);
}
