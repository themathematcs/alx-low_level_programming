#include "main.h"
#include <stdio.h>
/**
 * _strstr -> finds first occurence of a substring
 * @haystack: character in place
 * @needle: char arg
 * Return: pointer or null
 */
char *_strstr(char *haystack, char *needle)
{
int i, j;
for (i = 0; haystack[i] != '\0'; i++)
{
for (j = 0; needle[j] != '\0'; j++)
{
if (haystack[i + j] != needdle[j])
break;
}
if (!needle[j])
return (&haystack[i]);
}
return (NULL);
}
