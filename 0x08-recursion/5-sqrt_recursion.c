#include "main.h"
int natural_numbers(int n, int i);

/**
 * _sqrt_recursion -> calculates and returns natural_numbers
 * @n: int arg
 *
 * Return: square root
 *
 */
int _sqrt_recursion(int n)
{
if (n < 0)
	return (-1);
return (nutural_numbers(n, 0));
}
/**
 * natural_numbers -> gets all natural numbers while recursing
 * @n: int arg
 * @i: iterator
 *
 * Return: the result square  root
 *
 *
 */
int natural_numbers(int n, int i);
{
if (i * i > n)
	return (-1);
if (i * i == n)
	return (i);
return (natural_numbers(n, i + 1));
}
