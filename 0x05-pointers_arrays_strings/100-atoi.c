#include "main.h"

/**
 * _atoi - changes a string to an int
 * @s: the string to be changed
 *
 * Return: the converted int
 */
int _atoi(char *s)
{
	int num = 0, i, n_sign = 1;

	if (*s == '\0')
		return (0);
	for (i = 0; s[i]; i++)
	{
		if ((num == INT_MAX / 10) && (s[i] - '0') > INT_MAX % 10 )
			return ((n_sign == 1)? INT_MAX : INT_MIN);
		if (s[i] == '-')
			n_sign = n_sign * -1;
		else if (s[i] >= '0' && s[i] <= '9')
			num = (num * 10) + (s[i] - '0');
		else if (num > 0)
			break;
	}
	if (n_sign == -1)
		num = num * -1;
	return (num);
}
