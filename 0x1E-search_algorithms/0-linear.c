#include "search_algos.h"
/**
 * linear_search - linear search function
 * @array: address of the first array element
 * @size: number of elements in the array
 * @value: value to search for
 * Return: index of the value if found, otherwise -1
 */

int linear_search(int *array, size_t size, int value)
{
int i;

for (i = 0; i < size; i++)
{
if (array[i] == value)
{
	return (i);
}
return (-1);
}
