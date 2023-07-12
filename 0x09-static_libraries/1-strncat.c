#include "main.h"

/**
 * _strncat - concatinates string of n lngth
 * @dest: detination string
 * @src: source
 * @n: length  of characters
 *
 * Return: a point to the added string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
