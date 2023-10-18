#include "main.h"

/**
 * _strncpy - Copies up to 'n' characters from the 'src' string to 'dest'.
 * @dest: A pointer to the destination string.
 * @src: A pointer to the source string to be copied.
 * @n: The maximum number of characters to copy from 'src'.
 *
 * Description:
 * This function copies up to 'n' characters from the 'src' string to the
 * 'dest' string. If 'src' contains fewer than 'n' characters, null bytes
 * are appended to 'dest' to ensure a total of 'n' characters in 'dest'.
 *
 * Return: A pointer to the resulting string 'dest'.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
