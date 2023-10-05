#include <unistd.h>

/**
 * main - Entry point of the program, prints a specific message to stderr
 *
 * Description:This program prints the message "and that piece of art is
 * useful" - Dora Korpar, 2015-10-19,
 * followed by a newline character, to the standard error (stderr).
 *
 * Return: The program returns 1 to indicate an error condition.
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
