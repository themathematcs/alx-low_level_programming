#include "main.h"
/**
 * string_toupper -> from lower to upercase
 * @m: character
 * Return: s
 *
 */
char *string_toupper(char *m)
{
int i;
for (i = 0; m[i] != '\0'; i++)
{
if (s[i] >= 'a' && s[i] <= 'z')
s[i] = s[i] - 32;
}
return (s);
}
