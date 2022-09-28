#include "main.h"
int prime(int n, int i);

/**
 * is_prime_number -> figures out if int is prime or not
 * @n: intager value
 * Return: 1 if n is prime 0 if not
 */
int is_prime_number(int n)
{
if (n <= 1)
	return (0);
return (prime(n, n - 1));

}
/**
 * prime -> calculates if a number is prime
 * @n: int value
 * @i: itarator
 *
 * Return: i if n is prime, 0 if not
 *
 */
int prime(int n, int i)
{
if (i == 1)
return (1);
if (n % i == 0 && i > 0)
	return (0);
return (prime(n, i - 1));
}
