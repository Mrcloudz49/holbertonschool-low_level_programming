#include "main.h"
/**
 * binary_to_uint - converts binary to unsigned int
 * @b: pointer to string of 0 and 1 chars
 * Return: converted num, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, mult = 1;
	int len = 0;
	char *cp = strdup(b);

	if (b == NULL)
		return (0);

	len = strlen(cp);

	for (len -= 1; len >= 0; len--)
	{
		if (cp[len] != '0' && cp[len] != '1')
			return (0);

		num += (cp[len] - '0') * mult;
		mult *= 2;
	}
	return (num);
}

