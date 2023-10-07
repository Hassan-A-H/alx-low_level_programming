#include <stdio.h>

/**
 * main - Entry point of the program, prints lowercase and uppercase alphabets
 *
 * Description:
 * This C program initializes a character variable with 'a' and
 * uses a while loop to print the lowercase English alphabet from 'a' to 'z'.
 * It then initializes the same character variable with 'A' and uses another
 * while loop to print the uppercase
 * English alphabet from 'A' to 'Z'. After printing both alphabets,
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
		putchar(c++);

	c = 'A';
	while (c <= 'Z')
		putchar(c++);

	putchar('\n');
	return (0);
}
