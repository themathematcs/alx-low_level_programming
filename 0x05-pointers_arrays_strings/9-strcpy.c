#include "main.h"
/**
 * _strcpy -> copies the string point
 * @dest: pointer
 * @src: copied str
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int len, i,
while (src[len] != '\0')
{
len++;
}
for (i = 0; i < len; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}
