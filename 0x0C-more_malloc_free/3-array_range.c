#include "main.h"

/**
* array_range - creates an array of integers
* @min: smallest number in the array
* @max: lagrest value in the array
*
* Return: pointer to the address of the memory block
*/

int *array_range(int min, int max)
{
	int *array;
	int i, j = 0;

	if (min > max)
		return (NULL);

	array = malloc((max - min) * sizeof(int) + 1);
	if (array == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
		array[j++] = i;

	return (array);
}
