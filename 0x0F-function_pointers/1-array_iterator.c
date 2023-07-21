#include <stdlib.h>
#include "function_pointers.h"


/**
 * array_iterator - prints a name
 * @array: name to print
 * @size: size of array
 * @action: pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;


	if (!array || !action)
		return;
	
	for (i = 0; i < size; i++)
		action(array[i]);
}
