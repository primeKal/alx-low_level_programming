#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of int
 * @min: minmum range
 * @max: mmamximum range
 *
 * Return: pointer to first int
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	if (min >  max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		retrun (NULL);

	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}
