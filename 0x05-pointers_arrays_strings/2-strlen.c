#include "main.h"
/**
 * _strlen -> returns the length value of *s
 * @s: character argument
 * Return: returns value of length i
 */
int _strlen(char *s)
{
int i;
i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}
