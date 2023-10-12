#include "main.h"


/**
 * _isupper - Checks if a character is an uppercase letter.
 * @c: The character to be checked.
 *
 * Description:
 * This function checks whether a given character is an uppercase letter,
 * according to the ASCII character encoding. It returns 1 if the character
 * is an uppercase letter ('A' to 'Z'), and 0 otherwise.
 *
 * Parameters:
 * @c: The character to be checked.
 *
 * Return:
 * 1 if @c is an uppercase letter, 0 otherwise.
 */

INT _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
