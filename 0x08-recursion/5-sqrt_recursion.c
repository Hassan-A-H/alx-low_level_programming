#include "main.h"

/**
* _sqrt_recursion - returns the natural square root of a number
* @n: number to be used
*
* Return: the square root of n
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);

	return (_sqrt(n, 2));
}


/**
 * _sqrt - returns the square root of a number
 * @n: test number
 * @i: squared number
 *
 * Return: the square root of n
 */

int _sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}
