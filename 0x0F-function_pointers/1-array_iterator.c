#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator -> iterrates through its parameters
 * @array: array to itarate over
 * @size: size of the array
 * @action: pointer to function
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;


	for (i = 0; i < size; i++)
		action(array[i]);
}
