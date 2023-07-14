#include <stdlib.h>
#include "main.h"

/**
 * *_memset - fills memoy with byte
 * @s: memory area
 * @b: char to copy
 * @n: number of times
 *
 * Return: pointer to the memo
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
 * *_calloc - allocates memory for array
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
