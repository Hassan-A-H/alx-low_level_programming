#include "main.h"

/**
* leet - function that encode a string
* @str: string that will be encoded
* Return: returns encoded string
*/

char *leet(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == 'a' || str[i] == 'A')
			str[i] = 4 + '0';
		else if (str[i] == 'e' || str[i] == 'E')
			str[i] = 3 + '0';
		else if (str[i] == 'o' || str[i] == 'O')
			str[i] = '0';
		else if (str[i] == 't' || str[i] == 'T')
			str[i] = 7 + '0';
		else if (str[i] == 'l' || str[i] == 'L')
			str[i] = 1 + '0';
		else
			continue;
	}
	return (str);
}
