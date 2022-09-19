#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - entry point
 *
 *return = always 0 (Success)
 */
int main(void)
{
	char x;

	for (x="a"; x<='z'; x++)
		putchar(x);
	printf("\n");

	return(0);
}
