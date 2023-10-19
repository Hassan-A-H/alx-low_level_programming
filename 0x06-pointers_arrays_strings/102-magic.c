#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description:
 * This is a C program that demonstrates the use of arrays, pointers nad memory
 * allocation. It declares an integer variable 'n', an integer array 'a' with a
 * size of 5, and a pointer to an integer 'p'. It assigns the value '1024' to
 * the third element of the array 'a'. It assigns the address of the integer
 * variable 'n' to the pointer 'p'. An attempt is made to access a memory
 * location pointed to by 'p + 5' and assigns the value '98' to it, resulting
 * in undefined behavior since it tries to access memory outside the valid
 * memory location of 'n'. Finally, it prints the value of 'a[2]' using
 * 'printf', but this value remains
 * unchanged at '1024' despite the incorrect operation on the pointer 'p'.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	*(p + 5) = 98;
	printf("a[2] = %d\n", a[2]);
	return (0);
}
