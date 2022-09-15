#include "main.h"
/**
 * print_numbers -> prints 1 to 9
 *
 * Return: 0
 */
void print_numbers(void)
{
int i;
i = 0;
while (i < 10)
{
_putchar(i + '0');
i++;
}
_putchar('\n');
}
