#include "main.h"

/**
 * infinite_add - Adds two numeric strings and stores the result.
 * @n1: The first numeric string.
 * @n2: The second numeric string.
 * @r: The buffer to store the result.
 * @size_r: The size of the result buffer.
 *
 * Return: A pointer to the result, or 0 if result doesn't fit.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1, len2, sum, carry;
	int i, j, k, digit1, digit2, temp;

	len1 = 0;
	while (n1[len1] != '\0')
		len1++;
	len2 = 0;
	while (n2[len2] != '\0')
		len2++;
	if (size_r <= len1 + 1 || size_r <= len2 + 1)
		return (0);
	sum = 0;
	carry = 0;
	for (i = len1 - 1, j = len2 - 1, k = 0; i >= 0 || j >= 0 || carry; i--,
		     j--, k++)
	{
		digit1 = (i >= 0) ? n1[i] - '0' : 0;
		digit2 = (j >= 0) ? n2[j] - '0' : 0;

		sum = digit1 + digit2 + carry;
		carry = sum / 10;
		r[k] = sum % 10 + '0';
	}

	r[k] = '\0';

	for (i = 0, j = k - 1; i < k / 2; i++, j--)
	{
		temp = r[i];
		r[i] = r[j];
		r[j] = temp;
	}
	return (r);
}
