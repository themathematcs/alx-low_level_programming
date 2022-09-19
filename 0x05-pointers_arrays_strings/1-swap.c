#include "main.h"
/**
 * swap_int -> swaps the value of a and b
 * @a: character argument to be swaped by b
 * @b: character argument to be swaped by a
 *
 */
void swap_int(int *a, int *b)
{
int c;

c = *a;
*a = *b;
*b = c;
}
