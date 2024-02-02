#include "hash_tables.h"

/**
 * key_index - Retrieves the index at which a key/value pair should
 *             be stored in the array of a hash table.
 * @key: The key to determine the index for.
 * @size: The size of the array in the hash table.
 *
 * Return: The calculated index for the given key.
 *
 * Description: This function utilizes the djb2 hashing algorithm
 *              to compute the hash value for the key and then
 *              calculates the index by taking the modulus with
 *              the size of the hash table array.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
