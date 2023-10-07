#include <stdio.h>

/**
 * main - Entry point of the program,
 * prints numbers from 0 to 9 separated by commas and spaces.
 *
 * Description:
 * This C program initializes an integer variable 'n' with 0
 * and uses a while loop to print the numbers from 0 to 9.
 * It separates the numbers by commas and spaces.
 * After printing the numbers, it adds a newline character to move to next line
 *
 * Return:
 * The program returns 0 to indicate successful execution.
 */

int main(void)
{
	int n;

	n = 0;
	while (n < 10)
	{
		putchar(n + '0');
		if (n < 9)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
