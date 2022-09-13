#include "main.h"
/**
 * _isalpha -> checks if number is lower or uper case
 * @c: character argument
 * Return: 1 if c is a letter, 0 if otherwise
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
