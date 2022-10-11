#include "main.h"
/**
 * _pow_recursion - returns the value of x raised to the power y
 * @x: base
 * @y: exponent
 * Return: the result of x to the y power
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else if (y == 1)
		return (x);
	return (x *= _pow_recursion(x, y - 1));
}
