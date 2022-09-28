#include "main.h"
/**
 * _pow_recursion -> raises the power of x by y
 * @x: intager arg
 * @y: intager arg
 *
 * Return: after power up
 *
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
	return (-1);
if (y == 0)
	return (1);
return (x * _pow_recursion(x, y - 1));
}
