#include "main.h"


/**
 * puts_half - prints the second half of the string
 * @str: A pointer to the first character in hte string
 *
 * Description: The function should print the second half of the string
 * If the number of characters is odd, the function should print the last n
 * characters of the string, where n = (length_of_the_string - 1) / 2.
 *
 * Return: Nothing
 */
void puts_half(char *str)
{
	int str_len, i;

	str_len = 0;
	while (str[str_len] != '\0')
		str_len++;

	if (str_len % 2 == 0)
	{
		i = str_len / 2;
	}
	else
	{
		i = (str_len + 1) / 2;
	}


	while (str[i] != '\0')
		_putchar(str[i++]);

	_putchar('\n');
}
