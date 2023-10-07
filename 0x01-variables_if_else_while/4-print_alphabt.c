#include <stdio.h>

/**
 * main - Entry point of the program, prints lowercase (except 'q' and 'e')
 *
 * Description:
 * This C program initializes a character variable with 'a' and uses
 * a while loop to print the lowercase English alphabet from 'a' to 'z'.
 * It excludes the characters 'q'
 * and 'e' from the printed output. After printing the alphabet,
 * it adds a newline character
 * to move to the next line.
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
		if (c != 'q' && c != 'e')
			putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
