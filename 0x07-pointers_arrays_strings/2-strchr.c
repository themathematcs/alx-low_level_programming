#include "main.h"
#include <stdio.h>
/**
 * _strchr -> locates a character in a string
 * @s: pointer used
 * @c: character used to identify the char location
 *
 * Return: s when succesfull
 */
char *_strchr(char *s, char c)
{
int a;
while (1)
{
a = *s++;
if (a == c)
{
return (s - 1);
}
if (a == 0)
{
return (NULL);
}
}
}
