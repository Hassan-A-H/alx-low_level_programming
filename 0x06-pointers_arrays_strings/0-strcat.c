#include "main.h"


/**
 * _strcat - concatenates two strings.
 * @dest: A pointer to the first character in thr dest string
 * @src: A pointer to the first character in the src string
 *
 * Destination: This function concatenates two strings.
 *
 * Return: A pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i, dest_len;

	i = 0;
	dest_len = 0;
	while (dest[i++] != '\0')
		dest_len++;

	for (i = dest_len; *src != '\0'; i++)
	{
		dest[i] = *src;
		src++;
	}
	dest[i] = '\0';

	return (dest);
}
