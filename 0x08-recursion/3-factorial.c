#include "main.h"
/**
 * factorial -> calculates factoril of n
 * @n: intager arg
 *
 * Return: n
 *
 */
int factorial(int n)
{
if (n < 0)
	return (-1);
if (n == 0)
	return (1);
return (n * factorial(n - 1));

}
