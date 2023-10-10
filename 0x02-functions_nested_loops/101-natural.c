#include <stdio.h>

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
