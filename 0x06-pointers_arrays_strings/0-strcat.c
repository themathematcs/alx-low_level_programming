#include "main.h"
/**
 * _strcat -> concatinates two strings
 * @dest: character argument
 * @src: string add
 * Return: dest as return
 */
char *_strcat(char *dest, char *src)
{
int i, j;
i = 0;
j = 0;
while (dest[i] != '\0')
i++;
while (src[j] != '\0')
{
j++;
i++;
}
dest[i] = '\0';
return (dest);
}
