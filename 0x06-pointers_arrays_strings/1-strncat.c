#include "main.h"
/**
 * _strncat -> prints
 * @dest: - character arg
 * @src: - character arg
 * @n: - character
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j;
i = 0;
i = 0;
while (dest[i] != '\0')
	i++;
while (src[i] != '\0' && j < n)
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
