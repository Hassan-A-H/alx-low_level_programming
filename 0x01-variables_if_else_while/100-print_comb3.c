#include <stdio.h>

/**
 * main - Entry point of the program, prints all possible combinations of two
 * digits
 *
 * Description:
 * This C program initializes two integer variables, 'n1' and 'n2'.
 * It uses nested 'while' loops
 * to iterate through the digits from 0 to 9, ensuring that 'n2'
 * is always greater than 'n1' to avoid
 * duplicate combinations. It prints the combinations as characters separated
 * by a comma and space.
 * After printing all combinations, it adds a newline character to
 * move to the next line.
 *
 * Return:
 * The program returns 0 to indicate successful execution.
 */

int main(void)
{
	int n1, n2;

	n1 = 0;

	while (n1 < 9)
	{
		n2 = n1 + 1;
		while (n2 < 10)
		{
			putchar(n1 + '0');
			putchar(n2 + '0');

			if (n1 != 8 || n2 != 9)
			{
				putchar(',');
				putchar(' ');
			}
		n2++;
		}
		n1++;
	}
	putchar('\n');
	return (0);
}
