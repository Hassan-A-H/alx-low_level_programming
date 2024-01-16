#include "main.h"

/**
 * _strncat - Concatenates a limited number of characters from two strings.
 * @dest: A pointer to the destination string.
 * @src: A pointer to hte sourcs string to be concatenated.
 * @n: The number of character to concatenate form src.
 *
 * Description: This function concatenates up to 'n' characters form src to
 * dest string, ending with null terminator.
 *
 * Return: A pointer to the resulting string dest
 */


char *_strncat(char *dest, char *src, int n)
{
	int i, dest_len, src_len;

	i = 0;
	dest_len = 0;
	while (dest[i++] != '\0')
		dest_len++;
	i = 0;
	src_len = 0;
	while (src[i++] != '\0')
		src_len++;
	if (n > src_len)
		n = src_len;
	for (i = 0; i < n; i++)
	{
		dest[i + dest_len] = src[i];
	}
	dest[i + dest_len] = '\0';
	return (dest);
}
