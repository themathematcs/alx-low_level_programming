#include "main.h"

/**
 * _strspn -> gets the length of a prifixed substring
 * @s: strings argument
 * @accept: string arg used to match s
 *
 * Return: s
 */
unsigned int _strspn(char *s, char *accept)
{
int i, j, f, flag;
f = 0;

for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
f++;
flag = 1;
}
}
if (flag == 0)
{
return (f);
}
}
return (0);
}
