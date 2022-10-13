#include "function_pointers.h"

/**
 * int_index - serch an for presence of int
 * @array: array
 * @size: size of array
 * @cmp: pointer
 *
 * Return: retrurns an int
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{

int i;

if (array && cmp)
{
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i] != 0)
			return (i);
	}
}
return (-1);
}
