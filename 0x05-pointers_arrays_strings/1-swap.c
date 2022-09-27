#include "main.h"
/**
 * swap_int - swaps two int
 * @a: an integer to swap
 * @b: integer to swap
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int sw;

	sw = *a;
	*a = *b;
	*b = sw;
}
