#include "main.h"
/**
 * _strncpy -> copies character
 * @dest: - character arg
 * @src: - character arg
 * @n: - character arg
 * Return: dest
 *
 */
char *_strncpy(char *dest, char *src, int n)
{
int m, n;
m = 0;
n = 0;
while (src[i] != '\0' && i < n)
{
dest[i] = src[i];
i++;
}
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
