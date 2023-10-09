#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *table = NULL;

	if (size < 1)
		return (NULL);

	table = malloc(sizeof(hash_table_t));

	if (!table)
		return (NULL);

	table->array = malloc(sizeof(hash_table_t) * size);

	if (!table->array)
	{
		free(table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		table->array[i] = NULL;
	}
	table->size = size;

	return (table);
}
