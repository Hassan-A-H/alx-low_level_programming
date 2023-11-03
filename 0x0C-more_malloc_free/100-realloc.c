#include "main.h"

/**
* _realloc - reallocates a memory block
* @ptr: pointer to the memory previously allocated with a call to malloc
* @old_size: size of ptr
* @new_size: size of the new memory to be allocated
*
* Return: pointer to the address of the new memory block
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *block;

	if (ptr == NULL)
	{
		block = malloc(new_size);
		return (block);
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	block = malloc(new_size);

	if (block == NULL)
		return (NULL);

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			*((char *)block + i) = *((char *)ptr + i);
	}

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			*((char *)block + i) = *((char *)ptr + i);
	}

	free(ptr);
	return (block);
}
