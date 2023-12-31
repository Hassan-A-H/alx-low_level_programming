#include <stdio.h>

/**
 * main - Entry point, prints digits from 0 to 9
 *
 * Description: This C program prints the digits from 0 to 9 using a while loop
 * It converts each digit to a character and prints it. After printing digits,
 * it adds a newline character.
 *
 * Return: 0 on success
 */

int main(void)
{
	int n;

	n = 0;
	while (n < 10)
		putchar(n++ + '0');
	putchar('\n');
	return (0);
}
