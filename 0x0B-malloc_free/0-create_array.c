#include "main.h"

/**
* create_array - creates an array of chars, and
* initializes it with a specific char.
*@size: Size of the array
*@c: Character to insert
*Return: NULL if size is zero or if it fails,
*pointer to array if everything is normal.
*/

char *create_array(unsigned int size, char c)
{
	char *t;
	unsigned int i;

	if (!size)
		return (NULL);

	t = malloc(size * sizeof(char));
	if (t == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		t[i] = c;
	}

	return (t);
}
