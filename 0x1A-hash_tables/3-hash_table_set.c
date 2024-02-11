#include "hash_tables.h"

hash_node_t *hash_node(const char *key, const char *value);
void free_node(hash_node_t *node);
void free_table(hash_table_t *table);

/**
 * hash_table_set - Add or update an element in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key.
 *
 * Return: Upon failure - 0.
 *         Otherwise - 1.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *current_node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	current_node = hash_node(key, value);
	if (ht->array[index])
	{
		if (strcmp(current_node->key, key) == 0)
		{
			strcpy(ht->array[index]->value, value);
			return (1);
		}
		else
		{
			current_node->next = ht->array[index];
			ht->array[index] = current_node;
			return (1);
		}
	}
	ht->array[index] = current_node;
	return (1);
}

/**
 * hash_node - create new node
 * @key: The key cannot be an empty string.
 * @value: The value associated with key.
 * Return: A pointer to newly created node
 */
hash_node_t *hash_node(const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (NULL);
	new_node->key = malloc(strlen(key) + 1);
	if (new_node->key == NULL)
		return (NULL);
	new_node->value = malloc(strlen(value) + 1);
	if (new_node->value == NULL)
		return (NULL);
	new_node->next = NULL;
	strcpy(new_node->key, key);
	strcpy(new_node->value, value);
	return (new_node);
}

/**
 * free_node - Deallocate node.
 *
 * @node: To be freed
 * Return: Nothing
 */
void free_node(hash_node_t *node)
{
	free(node->key);
	free(node->value);
	free(node);
}

/**
 * free_table - Deallocate table.
 *
 * @table: To be freed
 * Return: Nothing
 */
void free_table(hash_table_t *table)
{
	hash_node_t *temp;
	unsigned long int i;

	for (i = 0; i < table->size; i++)
	{
		temp = table->array[i];
		if (temp)
			free_node(temp);
	}
	free(table->array);
	free(table);
}
