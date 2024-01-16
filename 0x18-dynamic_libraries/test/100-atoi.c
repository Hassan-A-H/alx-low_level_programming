#include "main.h"
#include <limits.h>
/**
 * _atoi - changes a string to an int
 * @s: the string to be changed
 *
 * Return: the converted int
 */
int _atoi(char *s)
{
	int i, num;

	i = 1;
	num = 0;
	while (*s)
	{
		if (num == INT_MAX / 10 && *s - '0' > INT_MAX % 10)
		{
			return ((i == 1) ? INT_MAX : INT_MIN);
		}
		if (*s == '-')
			i *= -1;
		else if (*s >= '0' && *s <= '9')
			num = num * 10 + (*s - '0');
		else if (num > 0)
			break;
		s++;
	}
	return (num * i);
}
