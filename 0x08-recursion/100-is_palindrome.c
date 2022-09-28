#include "main.h"

int palindrome(char *s, int i, int len);
int strleni(char *s);

/**
 * is_palindrome -> checks for empty str
 * @s: char arg
 *
 * Return: 1 if it is, 0 its not
 *
 */
int is_palindrome(char *s)
{
if (*s == 0)
	return (1);
return (palindrome(s, 0, strleni(s)));
}
/**
 * strlen - length of a string
 * @s: string to calculatethe length
 *
 * Return: str length
 */
int strleni(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + strleni(s + 1));
}
/**
 * palindrome -> looks for palindrome in string
 * @s: string checked
 * @i: iterator
 * @len: length of the string
 *
 * Return: 1 if palindrome, 0 if not
 *
 */
int palindrome(char *s, int i, int len)
{
if (*(s + i) != *(s + len - 1))
	return (0);
if (i >= len)
	return (1);
return (palindrome(s, i + 1, len - 1));
}
