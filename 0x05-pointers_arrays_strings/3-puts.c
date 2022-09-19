#include "main.h"
/**
 * _puts -> prints a character
 * @str: pointer to the cahar
 *
 */
void _puts(char *str)

	for (i = 0; str != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
