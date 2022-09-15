#include "main.h"
/**
 * more_numbers -> printing more numbers
 * main: main block
 * Return: Always 0.
 */
void more_numbers(void)
{
int i, j;
for (i = 0; i <= 10; i++)
{
for (j = 0; j < 10; j++)
_putchar(j);
}
_putchar('\n');
}
