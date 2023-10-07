#include <stdio.h>

/**
 * main - Entry point of the program, prints digits and lowercase characters
 *
 * Description:
 * This C program initializes an integer variable 'n' with 0 and a character
 * variable 'c' with 'a'. It uses a while loop to print the digits from 0 to 9
 * and then continues to print lowercase characters from 'a' to 'f'. After
 * printing both digits and characters, it adds a newline character to move to
 * the next line.
 *
 * Return:
 * The program returns 0 to indicate successful execution.
 */
#include <stdio.h>

/**
 * main - Entry point of the program, prints digits and lowercase characters
 *
 * Description:
 * This C program initializes an integer variable 'n' with 0 and a character
 * variable 'c' with 'a'. It uses a while loop to print the digits from 0 to 9
 * and then continues to print lowercase characters from 'a' to 'f'. After
 * printing both digits and characters, it adds a newline character to move to
 * the next line.
 *
 * Return:
 * The program returns 0 to indicate successful execution.
 */


int main(void)
{
	int n;
	char c;

	n = 0;
	c = 'a';

	while (n < 16)
	{
		if (n >= 10)
			putchar(c++);
		else
			putchar(n + '0');
		n++;
	}
	putchar('\n');
	return (0);
}
