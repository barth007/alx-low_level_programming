#include "hash_tables.h"
/**
	* hash_table_create - function creates a hash table
	* @size: length of the table array
	* Return: pointer to the created table
**/
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *ht;

	/*check if size is NULL*/
	if (size == 0)
		return (NULL);
	/*Allocating memory to table struct*/
	ht = malloc(sizeof(hash_table_t));
	if (!ht)
		return (NULL);
	/*defferencing the size variable and giving it a value*/
	ht->size = size;
	/*Allocating memory to table array*/
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (!ht->array)
	{
		free(ht);
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		ht->array[i] = NULL;
		i++;
	}
	return (ht);
}
