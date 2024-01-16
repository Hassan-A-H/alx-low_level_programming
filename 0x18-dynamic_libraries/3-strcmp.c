#include "main.h"

/**
 * _strcmp - Compares two strings.
 * @s1: A pointer to the first string.
 * @s2: A pointer to the second string.
 *
 * Description:
 * This function compares the two strings, character by character.
 *
 * Return:
 * - 0 if the strings are equal.
 * - A positive value if the first differing character in 's1' is greater than
 * that in 's2'.
 * - A negative value if the first differing character in 's1'
 * is less than that in 's2'.
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
