#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - prints alphabet
 *
 * Return: Always 0 (Succes)
 */
void print_alphabet(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
	_putchar(n);
	}
	_putchar('\n');
}
