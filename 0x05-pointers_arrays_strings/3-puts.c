#include "main.h"
/**
 * _puts -> prints a character
 * @str: pointer ttto the cahar
 *
 */
void _puts(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
_puts(str[i]);
}
_puts('\n');
}
