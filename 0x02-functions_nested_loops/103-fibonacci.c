#include <stdio.h>

void fibonacci(int n);

/**
 * main - Entry point, calculates and prints the sum of even Fibonacci numbers
 *
 * Description:
 * The main function calculates and prints the sum of even Fibonacci numbers
 * up to a specified limit. It then returns 0 to indicate successful execution
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	fibonacci(50);
	return (0);
}

/**
 * fibonacci - Calculates the sum of even Fibonacci numbers up to
 * a specified limit.
 * @n: The limit for Fibonacci numbers to be considered.
 *
 * Description:
 * This function calculates the sum of even Fibonacci numbers up to the
 * specified limit 'n'. It starts with the first two terms (0 and 1)
 * and iteratively calculates the next term by adding the current and previous
 * terms. It checks if each term is even and within the specified limit and
 * accumulates the sum accordingly. The final
 * sum is printed to the standard output.
 */

void fibonacci(int n)
{
	int i;
	unsigned long next_num, prev_num, cur_num, sum;

	prev_num = 0;
	cur_num = 1;
	sum = 0;
	for (i = 0; i < n; i++)
	{
		next_num = prev_num + cur_num;
		prev_num = cur_num;
		cur_num = next_num;
		if (next_num < 4000000 && next_num % 2 == 0)
			sum += next_num;
		else if (next_num > 4000000)
			break;
		continue;
	}
	printf("%lu\n", sum);
}
