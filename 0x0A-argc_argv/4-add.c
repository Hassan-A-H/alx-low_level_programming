#include "main.h"

/**
*main - adds positive numbers
*@argc: number of arguments
*@argv: array of arguments
*Return: 0 on success, 1 on failure
*/

int main(int argc, char *argv[])
{
	int i, j, sum, num;

	if (argc > 1)
	{
		sum = 0;
		num = 0;
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
				num = atoi(argv[i]);
			}
			sum += num;
		}
	}
	else
	{
		printf("0\n");
	}
	printf("%d\n", sum);
	return (0);
}
