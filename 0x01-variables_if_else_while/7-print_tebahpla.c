#include <stdio.h>

/**
 * main - Entry point of the program, prints reversed lowercase English alpha
 *
 * Description:
 * This C program initializes a character variable with 'z'
 * and uses a while loop to print the lowercase English alphabet
 * from 'z' to 'a', After printing the alphabet,
 * it adds a newline character to move to the next line.
 *
 * Return:
 * The program returns 0 to indicate successful execution.
 */

int main(void)
{
	char c;

	c = 'z';
	while (c >= 'a')
	{
		putchar(c--);
	}
	putchar('\n');
	return (0);
}
