#include "main.h"

/**
* is_palindrome - returns true if the given string is a palindrome
*@s: string to check
*Return: true if the given string is a palindrome
*/

int is_palindrome(char *s)
{
	int i, len;

	len = _strlen(s);
	i = 0;

	if (!(*s))
		return (1);

	return (_check_palindrome(s, len, i));
}

/**
 * _strlen - Returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */


int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * _check_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 * @len: The length of s.
 * @i: The index of the string to be checked.
 *
 * Return: If the string is a palindrome - 1.
 *         If the string is not a palindrome - 0.
 */

int _check_palindrome(char *s, int len, int i)
{
	if (s[i] == s[len / 2])
		return (1);

	if (s[i] == s[len - i - 1])
		return (_check_palindrome(s, len, i + 1));
	return (0);
}
