#include "main.h"

/**
 * _isalpha - Checks if a character is an alphabet
 *
 * @c: The character to be checked
 *
 * Description:
 * This function takes a character as input and checks whether it is
 * a lowercase or an uppercase letter (a to z and A to Z) based on
 * its ASCII value. If the character is lowercase,
 * the function returns 1; otherwise, it returns 0.
 *
 * Return: 1 if 'c' is a lowercase letter, 0 otherwise.
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);

}
