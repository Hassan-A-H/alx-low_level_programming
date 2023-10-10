#include <stdio.h>


/**
 * multiple_3_5 - Calculates the sum of multiples of 3 or 5 below a given number
 *
 * @n: The upper limit for finding multiples
 *
 * Description:
 * This function calculates the sum of all multiples of 3 or 5 that are less
 * than the given number 'n'. It uses a loop to iterate through numbers from 0
 * to 'n - 1' and adds the multiples to a running sum. The final sum is printed.
 */

void multiple_3_5(int);

int main(void)
{
	multiple_3_5(1024);
	return (0);
}

void multiple_3_5(int n)
{
	int sum, i;

	sum = 0;
	for (i = 0; i < n; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
}
