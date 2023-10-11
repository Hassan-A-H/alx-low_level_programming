#include <stdio.h>

void fibonacci(int n);

/**
 * main - Entry point of the program, calculates and
 * prints the Fibonacci sequence.
 *
 * Description:
 * The main function serves as the entry point for the program.
 * It calls the `fibonacci` function with the number 50 to calculate and
 * print the 50th number in the Fibonacci sequence. The result is printed
 * to the standard output, and the program returns 0 to indicate
 * successful execution.
 *
 * Return: Always returns 0 to indicate successful program execution.
 */

int main(void)
{
	fibonacci(50);
	return (0);
}


/**
 * fibonacci - Calculates and prints the Fibonacci sequence up to a given term.
 *
 * @n: The term in the Fibonacci sequence to calculate.
 *
 * Description:
 * This function calculates and prints the Fibonacci sequence up to
 * the 'n'-th term. It starts with the first two terms (0 and 1)
 * and iteratively calculates the next term by adding the current and previous
 * terms. The final term is printed to the standard output.
 */

void fibonacci(int n)
{
	unsigned long next_num, cur_num, prev_num;
	int i;

	cur_num = 1;
	prev_num = 0;
	for (i = 0; i < n; i++)
	{
		next_num = cur_num + prev_num;
		prev_num = cur_num;
		cur_num = next_num;
		if (i == n - 1)
			printf("%lu", next_num);
		else
			printf("%lu, ", next_num);
	}
	printf("\n");
}
