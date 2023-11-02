#include "main.h"

/**
*string_nconcat - Concatenates two strings using at
*most an inputted number of bytes.
*@s1: The first string.
*@s2: The second string.
*@n: The maximum number of bytes of s2 to concatenate to s1.
*
*Return: If the function fails - NULL.
*Otherwise - a pointer to the concatenated space in memory.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int len1, len2, len, total, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = 0;
	for (i = 0; s1[i]; i++)
		len1++;
	len2 = 0;
	for (i = 0; s2[i]; i++)
		len2++;

	if (n >= len2)
		len = len2;
	else
		len = n;

	total = len1 + len + 1;
	str = malloc(total * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		str[i] = s1[i];
	for (j = 0; j < len; j++)
		str[i++] = s2[j];
	str[i] = '\0';

	return (str);
}
