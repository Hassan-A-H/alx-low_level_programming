#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: A pointer to the first character in the string
 *
 * Description: This function reverses the characters in the string.
 *
 * Return: Nothing.
 */
void rev_string(char *s)
{
	int str_len, i, temp;

	str_len = 0;
	while (s[str_len] != '\0')
	{
		str_len++;
	}

	for (i = 0; i < (str_len / 2); i++)
	{
		temp = s[i];
		s[i] = s[str_len - i - 1];
		s[str_len - i - 1] = temp;
	}

}
