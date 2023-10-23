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

	i = 0;
	while (*haystack)
	{
		if (*needle == *haystack)
		{
			while (*needle)
			{
				if (*needle == *haystack)
				{
					needle++;
					haystack++;
					i++;
				}
			}
		}
		else if (!needle)
			break;
		haystack++;
	}
	return (haystack - i);
}
