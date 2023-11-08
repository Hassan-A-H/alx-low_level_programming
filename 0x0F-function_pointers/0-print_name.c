#include "function_pointers.h"

/**
 * print_name - prints a name.
 * @name: A pointer to name;
 * @f: A function pointer takes a pointer to character.
 * Return : Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
