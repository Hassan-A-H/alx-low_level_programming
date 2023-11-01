#include "main.h"

/**
 * _strdup -  allocated space in memory, which contains a copy of the string
 * given as a parameter.
 * @str: A pointer to a string wanted to be copied.
 * Return: NULL if size is zero or if it fails,
 * pointer to array if everything is normal.
 */

char *_strdup(char *str)
{
	int len, i;
	char *t;

	if (str == NULL)
		return (NULL);

	len = 0;
	i = 0;
	while (str[i++] != '\0')
		len++;

	t = malloc(len * sizeof(char));
	if (t == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		t[i] = str[i];
	t[i] = '\0';

	return (t);
}
