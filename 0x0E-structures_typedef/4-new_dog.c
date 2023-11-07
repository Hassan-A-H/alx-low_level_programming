#include "dog.h"

/**
 * _strdup - custom function to duplicate a string
 * @str: pointer to the string to duplicate
 * Return: a pointer to the newly duplicated string, or NULL on failure
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int length = 0;
	unsigned int i;

	if (str == NULL)
		return (NULL);

	while (str[length] != '\0')
		length++;

	duplicate = malloc(length + 1);
	if (duplicate == NULL)
		return (NULL);

	for (i = 0; i <= length; i++)
		duplicate[i] = str[i];

	return (duplicate);
}

/**
 * new_dog - creates a new dog structure
 * @name: pointer to the name of the dog
 * @age: age of the dog
 * @owner: pointer to the owner's name
 * Return: a pointer to the newly created dog structure, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_ptr;
	char *name_copy, *owner_copy;

	new_dog_ptr = malloc(sizeof(dog_t));
	if (new_dog_ptr == NULL)
		return (NULL);

	name_copy = _strdup(name);
	owner_copy = _strdup(owner);

	if (name_copy == NULL || owner_copy == NULL)
	{
		free(name_copy);
		free(owner_copy);
		free(new_dog_ptr);
		return (NULL);
	}

	new_dog_ptr->name = name_copy;
	new_dog_ptr->age = age;
	new_dog_ptr->owner = owner_copy;

	return (new_dog_ptr);
}
