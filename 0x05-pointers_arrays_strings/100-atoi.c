#include "main.h"

int _atoi(char *s)
{
	int num = 0, i, n_sign = 0;

	if (*s == '\0')
		return (0);
	for (i = 0; s[i]; i++)
	{
		if (s[i] == '-')
			n_sign++;
		else if (s[i] >= '0' && s[i] <= '9')
			num = (num * 10) + (s[i] - '0');
		else
			continue;
	}
	if (n_sign % 2)
		num = num * -1;
	return (num);
}
