#include "main.h"
/**
 * _puts -> prints a character
 * @str: pointer ttto the cahar
 *
 */
void _puts(char *str)
{

	for (; *str != '\0'; str++)
	{
	_putchar(*str);
	}
	_putchar('\n');
}
