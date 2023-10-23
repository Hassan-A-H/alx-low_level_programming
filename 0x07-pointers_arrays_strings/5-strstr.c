#include "main.h"
/**
*_strstr - The _strstr() function finds the first occurrence
* of the substring needle in the string haystack.
* The terminating null bytes (\0) are not compared
*@haystack: string where the search is made
*@needle: string whose occurence is searched in haystack
*Return:Returns a pointer to the beginning of the located
* substring, or NULL if the substring is not found.
*/

char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack)
	{
		i = 0;
		while (*needle && *needle == *haystack)
		{
			needle++;
			haystack++;
			i++;
		}
		if (*needle == '\0')
			return (haystack - i);
		haystack++;
	}
	return (NULL);
}
