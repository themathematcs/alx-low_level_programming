#include "main.h"
/**
 * print_line -> printing the character _
 * @n: character argument
 * Return: 0
 */
void print_line(int n)
{
int i;
if (n <= 0)

	_putchar('\n');
else
{
for (i = 0; i < n; i++)
	_putchar('_');
}
_putchar('\n');
}
