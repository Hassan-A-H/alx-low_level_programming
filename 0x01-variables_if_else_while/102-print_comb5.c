#include <stdio.h>

/**
 * main - Entry point of the program, prints all possible combinations of
 * two two-digit numbers
 *
 * Description:
 * This C program initializes two integer variables, 'num1' and 'num2'.
 * It uses nested 'for' loops to iterate through the numbers from 0 to 99
 * for both 'num1' and 'num2'. It ensures that 'num2' is always greater than
 * 'num1' to avoid duplicate combinations. The program prints
 * the combinations as characters, with each number printed with two digits
 * and separated by a space. It also adds a comma and space between
 * combinations, except for the last one. Finally,
 * it adds a newline character to move to the next line.
 *
 * Return:
 * The program returns 0 to indicate successful execution.
 */

int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 <= 99; num1++)
	{
		for (num2 = num1 + 1; num2 <= 99; num2++)
		{
			putchar(num1 / 10 + '0');
			putchar(num1 % 10 + '0');
			putchar(' ');
			putchar(num2 / 10 + '0');
			putchar(num2 % 10 + '0');

			if (num1 != 98 || num2 != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
