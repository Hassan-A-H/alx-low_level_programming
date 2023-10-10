#include "main.h"

/**
 * _islower - Checks if a character is a lowercase letter
 *
 * @c: The character to be checked
 *
 * Description:
 * This function takes a character as input and checks whether it is
 * a lowercase letter (a to z) based on its ASCII value. If the character
 * is lowercase, the function returns 1; otherwise, it returns 0.
 *
 * Return: 1 if 'c' is a lowercase letter, 0 otherwise.
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
