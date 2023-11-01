#include "main.h"

/**
* argstostr - a function that concatenates all the arguments of your program
*@ac: count of args passed to the function
*@av:array of arguments
*
*Return: pointer to the new string
*/

char *argstostr(int ac, char **av)
{
	int total, i, j;
	char *arg, *result;

	if (ac == 0 || av == NULL)
		return (NULL);
	total = 0;
	for (i = 0; i < ac; i++)
	{
		arg = av[i];
		if (arg)
		{
			while (*arg != '\0')
			{
				total++;
				arg++;
			}
			total++;
		}
	}
	result = (char *)malloc(total + 1);
	if (result == NULL)
		return (NULL);
	j = 0;
	for (i = 0; i < ac; i++)
	{
		arg = av[i];
		if (arg)
		{
			while (*arg != '\0')
			{
				result[j] = *arg;
				j++;
				arg++;
			}
			result[j] = '\n';
			j++;
		}
	}
	result[j] = '\0';
	return (result);
}
