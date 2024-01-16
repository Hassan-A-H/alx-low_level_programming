#include "main.h"

/**
 * _strcpy - copies the string pointed to by src, including
 * the terminating null byte (\0), to the buffer pointed to by dest.
 * @dest: A pointer to the destination buffer where the string will be copied.
 * @src: A pointer to the source string to be copied.
 *
 * Description: This function copies the characters from the source string
 * (src) to the destination buffer (dest) until it encounters the null
 * terminator ('\0') in src. It ensures that the destination buffer is
 * null-terminated after the copy.
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
