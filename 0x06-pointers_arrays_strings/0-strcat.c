#include "main.h"
/**
 * _strcat -> concatinates two strings
 * @dest: character argument to be used
 * @src: character 2 to be used
 * Return: dest when succesfull
 *
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
	des[i] = src[j];
	j++;
	i++;
}
dest[i] = '\0';

return (dest);
}
