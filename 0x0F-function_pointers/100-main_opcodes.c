#include <stdio.h>
#include <stdlib.h>

/**
*main -  program that prints the opcodes of its own main function.
*@argc: number of arguments passed to the program
*@argv: array of arguments
*
*Return: on success, 1 or 2 in case of failure
*/

int main(int argc, char *argv[])
{
	int i, bytes;
	unsigned char *opcode = (unsigned char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < bytes - 1; i++)
	{
		printf("%02x ", opcode[i]);
	}
	printf("%02x\n", opcode[i]);
	return (0);
}
