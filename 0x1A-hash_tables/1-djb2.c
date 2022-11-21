#include "hash_tables.h"
/**
 * hash_djb2 - a hash function with the dhb2 algorithm.
 * @str: the value to which the function
 * Return: a number representing the given string
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + c); /* hash * 33 + c */
	}
	return (hash);
}

