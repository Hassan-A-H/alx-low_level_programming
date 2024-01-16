#include "main.h"

/**
 * _isdigit - Checks if a character is a digit.
 * @c: The character to be checked.
 *
 * Description:
 * This function checks whether a given character is a digit, according to the
 * ASCII character encoding. It returns 1 if the character is a digit
 * ('0' to '9'), and 0 otherwise.
 *
 * Parameters:
 * @c: The character to be checked.
 *
 * Return:
 * 1 if @c is a digit, 0 otherwise.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
