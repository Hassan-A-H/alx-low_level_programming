#include "main.h"

/**
* leet - function that encode a string
* @str: string that will be encoded
* Return: returns encoded string
*/

char *leet(char *str)
{
	int i, j;
	char leet[8] = {'o', 'l', '?', 'e', 'a', '?', '?', 't'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 8; j++)
			if (str[i] == leet[j] || str[i] == leet[j] - 32)
				str[i] = j + '0';

	}
	return (str);
}
