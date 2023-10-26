#include "main.h"

/**
* is_prime_number - returns true if the number is prime
*@n: the number to check
*
*Return: true if the number is prime
*/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime(n, 2));
}


/**
* _prime - returns the 1 if n is prime
* @n: number to be checked
* @i: number to start checking from
*
* Return: 1 if n is prime, 0 otherwise
*/

int _prime(int n, int i)
{
	if (i == n / 2)
		return (1);
	if (n % i == 0)
		return (0);
	return (_prime(n, i + 1));
}
