#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all integers from n to 98
 *
 * @n: The starting integer
 *
 * Description:
 * This function prints all integers from the given integer 'n' to 98,
 * inclusive, in ascending or descending order, depending on 'n'.
 * It separates the integers with a comma and space and prints a newline
 * at the end.
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
			printf("%d, ", n++);
	}
	else
	{
		while (n > 98)
			printf("%d, ", n--);
	}
	printf("98");
	printf("\n");
}
