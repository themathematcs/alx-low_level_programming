#include "main.h"
/**
 * _memcpy -> function copies memory area
 * @dest: character argument that is a pointer
 * @src: memory area to copy from
 * @n: intager value used
 *
 * Return: a pointer to dest when succesfull
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}

return (dest);
}
