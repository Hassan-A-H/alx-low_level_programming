#include <stdio.h>
#include <stdlib.h>

/**
*main - prints the minimum number of coins to make change
* for an amount of money
*@argc: number of arguments
*@argv: array of arguments
*Return: returns 1 if there is an error; else returns 0
*/

int main(int argc, char *argv[])
{
	int amount, coins;

	coins = 0;
	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	amount = atoi(argv[1]);
	while (amount > 0)
	{
		coins++;
		if (amount >= 25)
		{
			amount -= 25;
			continue;
		}
		else if (amount >= 10)
		{
			amount -= 10;
			continue;
		}
		else if (amount >= 5)
		{
			amount -= 5;
			continue;
		}
		else if (amount >= 2)
		{
			amount -= 2;
			continue;
		}
		else
		{
			amount -= 1;
		}
	}
	printf("%d\n", coins);
	return (0);
}
