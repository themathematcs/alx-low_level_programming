#include "main.h"
/**
 * _strchr -> locates a character in a string
 * @s: pointer used
 * @c: character used to identify the char location
 *
 * Return: s when succesfull
 */
char *_strchr(char *s, char c)
{
int i;
while (1)
{
i = *s++;
if (i == c)
{
return (s - 1);
}
if (i == 0)
{
return (NULL);
}
}
}
