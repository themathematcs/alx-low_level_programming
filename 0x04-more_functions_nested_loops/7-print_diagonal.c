#include "main.h"
/**
 * print_diagonal -> prints character \ diagonaly
 * @n: character argument
 */
void print_diagonal(int n);
{
	int len, space;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
		{
			for (space = 0; space < len; space++)
			{
				_putchar('\\')
			}
			if (len == (n - 1))
			{
				continue;
			}
			_putchar('\n')
		}
	}
	_putchar('\n');
}
