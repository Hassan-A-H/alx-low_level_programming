#include <stdio.h>

/**
 * main - Entry point of the program, prints all possible combinations of
 * three digits
 *
 * Description:
 * This C program initializes three integer variables, 'n1', 'n2', and 'n3'.
 * It uses nested 'while' loops
 * to iterate through the digits from 0 to 9, ensuring that 'n2' and 'n3'
 * are always greater than their
 * preceding variables to avoid duplicate combinations. It prints the
 * combinations as characters separated
 * by a comma and space. After printing all combinations,
 * it adds a newline character to move to the next line.
 *
 * Return:
 * The program returns 0 to indicate successful execution.
 */

int main(void)
{
	int n1, n2, n3;

	n1 = 0;

	while (n1 < 8)
	{
		n2 = n1 + 1;
		while (n2 < 9)
		{
			n3 = n2 + 1;
			while (n3 < 10)
			{
				putchar(n1 + '0');
				putchar(n2 + '0');
				putchar(n3 + '0');
				if (n1 != 7 || n2 != 8 || n3 != 9)
				{
					putchar(',');
					putchar(' ');
				}
				n3++;
			}
			n2++;
		}
		n1++;
	}
	putchar('\n');
	return (0);
}
