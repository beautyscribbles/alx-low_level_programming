#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

/**
 * shash_table_create - a function of a hash table.
 * @size: A size of an array.
 *
 * Return: If wrongly retrun - NULL.
 *         else - use a pointer when created a new hash_table.
 * Description:a function that creates a hash table.
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	/* Function implementation of shash_table_create */
	shash_table_t *ht;
	unsigned long int ii;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);
	for (ii = 0; ii < size; ii++)
		ht->array[ii] = NULL;
	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}

/**
 * shash_table_set - Add an element in a hash_table.
 * @ht: A pointer to the hash_table.
 * @key: The key to adding - can't be an empty _tring.
 * @value: An associated a vlaue  with a key.
 *
 * Return: when failure - 0.
 *         else - 1.
 * Description: a function adds an element to the hash_table.
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	/* Function implementation of shash_table_set */
	shash_node_t *new_n, *tmp_p;
	char *val_copy;
	unsigned long int index_i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	val_copy = strdup(value);
	if (val_copy == NULL)
		return (0);

	index_i = key_index((const unsigned char *)key, ht->size);
	tmp_p = ht->shead;
	while (tmp_p)
	{
		if (strcmp(tmp_p->key, key) == 0)
		{
			free(tmp_p->value);
			tmp_p->value = val_copy;
			return (1);
		}
		tmp_p = tmp_p->snext;
	}

	new_n = malloc(sizeof(shash_node_t));
	if (new_n == NULL)
	{
		free(val_copy);
		return (0);
	}
	new_n->key = strdup(key);
	if (new_n->key == NULL)
	{
		free(val_copy);
		free(new_n);
		return (0);
	}
	new_n->value = val_copy;
	new_n->next = ht->array[index_i];
	ht->array[index_i] = new_n;

	if (ht->shead == NULL)
	{
		new_n->sprev = NULL;
		new_n->snext = NULL;
		ht->shead = new_n;
		ht->stail = new_n;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		new_n->sprev = NULL;
		new_n->snext = ht->shead;
		ht->shead->sprev = new_n;
		ht->shead = new_n;
	}
	else
	{
		tmp_p = ht->shead;
		while (tmp_p->snext != NULL && strcmp(tmp_p->snext->key, key) < 0)
			tmp_p = tmp_p->snext;
		new_n->sprev = tmp_p;
		new_n->snext = tmp_p->snext;
		if (tmp_p->snext == NULL)
			ht->stail = new_n;
		else
			tmp_p->snext->sprev = new_n;
		tmp_p->snext = new_n;
	}
	return (1);
}

/**
 * shash_table_get - a function that retrieves a value
 *                  associated with a key in a hash_table.
 * @ht: A pointer to the hash_table.
 * @key: A key to abtain a value, key looking for.
 * Return: If a key couldn't find - NULL.
 *         else - return tha value that associated with key in ht.
 * Description:a function retrieves value associated with a key
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	/* Function implementation of shash_table_get */
	shash_node_t *node_n;
	unsigned long int index_i;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index_i = key_index((const unsigned char *)key, ht->size);
	if (index_i >= ht->size)
		return (NULL);

	node_n = ht->shead;
	while (node_n != NULL && strcmp(node_n->key, key) != 0)
		node_n = node_n->snext;

	return ((node_n == NULL) ? NULL : node_n->value);
}

/**
 * shash_table_print - Prints the key-value pairs stored in a hash_table.
 * @ht: A pointer to the hash_table to be printed.
 *
 * return: if the hash is NULL, nothing is printed.
 *
 * Description: This function prints the key-value stored in a hash-table
 *              in the order they appear in the array of the hash_table.
 *              the format of format of the output is as follows
 *              key value, key value.
 **/

void shash_table_print(const shash_table_t *ht)
{
	/* Function implementation of shash_table_print */
	shash_node_t *node_n;

	if (ht == NULL)
		return;

	node_n = ht->shead;
	printf("{");
	while (node_n != NULL)
	{
		printf("'%s': '%s'", node_n->key, node_n->value);
		node_n = node_n->snext;
		if (node_n != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - a function Prints a sort hash_table
 *                          in a reverse_order.
 * @ht: A pointer to sorted hash_table to print.
 *
 * Description: Write a function that deletes a hash table.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	/* Function implementation of shash_table_print_rev */
	shash_node_t *node_n;

	if (ht == NULL)
		return;

	node_n = ht->stail;
	printf("{");
	while (node_n != NULL)
	{
		printf("'%s': '%s'", node_n->key, node_n->value);
		node_n = node_n->sprev;
		if (node_n != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - A function that used to deletes a hash_table.
 * @ht: A pointer to a hash_table.
 *
 * Description: Write a function that deletes a hash_table.
 */

void shash_table_delete(shash_table_t *ht)
{
	/* Function implementation of shash_table_delete */
	shash_table_t *head_of = ht;
	shash_node_t *node_n, *tmp_p;

	if (ht == NULL)
		return;

	node_n = ht->shead;
	while (node_n)
	{
		tmp_p = node_n->snext;
		free(node_n->key);
		free(node_n->value);
		free(node_n);
		node_n = tmp_p;
	}

	free(head_of->array);
	free(head_of);
}
