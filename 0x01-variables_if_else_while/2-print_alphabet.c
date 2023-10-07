#include <stdio.h>

/**
 * main - Entry point of the program, prints the lowercase English alphabet
 *
 * Description:
 * This C program initializes a character variable with 'a'
 * and uses a while loop to print the lowercase English alphabet from 'a' to 'z'
 * After printing the alphabet,
 * it adds a newline character to move to the next line.
 *
 * Return:
 * The program returns 0 to indicate successful execution.
 */

int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		putchar(c++);
	}
	putchar('\n');
	return (0);
}
