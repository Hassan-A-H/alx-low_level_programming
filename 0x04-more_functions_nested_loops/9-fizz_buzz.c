#include <stdio.h>

void fizz_buzz(void);

/**
 * main - Entry point of the program.
 *
 * Description:
 * This is the entry point of the program. It calls the 'fizz_buzz' function to
 * play the FizzBuzz game and returns 0 to indicate successful execution.
 *
 * Return:
 * Returns 0 upon successful execution.
 */

int main(void)
{
	fizz_buzz();
	return (0);
}

/**
 * fizz_buzz - Implements the FizzBuzz game for numbers from 1 to 100.
 *
 * Description:
 * This function implements the FizzBuzz game, where it counts from 1 to 100
 * and performs the following actions:
 * 1. If a number is divisible by 3, it prints "Fizz" instead of the number.
 * 2. If a number is divisible by 5, it prints "Buzz" instead of the number.
 * 3. If a number is divisible by both 3 and 5, it prints "FizzBuzz."
 * 4. For all other numbers, it prints the number itself.
 * The function uses a loop to iterate through the numbers and print the
 * corresponding output. It follows the FizzBuzz rules for replacing
 * numbers with "Fizz" or "Buzz" as specified.
 *
 * Parameters:
 * None.
 *
 * Return:
 * This function does not return a value (void).
 */

void fizz_buzz(void)
{
	int n, i;

	n = 100;
	for (i = 1; i <= n; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 5 == 0)
		{
			if (i == n)
				printf("Buzz\n");
			else
				printf("Buzz ");
		}
		else if (i % 3 == 0)
			printf("Fizz ");
		else
		{
			printf("%d ", i);
		}
	}
}
