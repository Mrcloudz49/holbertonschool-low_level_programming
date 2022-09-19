#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints lower case alphabet
 *
 * return: always 0 (success)
 */

int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
		putchar(low);
	printf("\n");

	return (0);
}
