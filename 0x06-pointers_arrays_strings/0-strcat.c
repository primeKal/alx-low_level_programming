#include "main.h"

/**
 * _strcat - concat 2 strings
 * @dest: to append to
 * @src: string to add
 *
 * Return: a pointer or stirng
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
