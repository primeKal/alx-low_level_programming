#include "main.h"
#include <stdio.h>

/**
 * *_strchr - locates a character in string
 * @s: string
 * @c: char to search
 *
 * Return" a point to first occurence of c
 */
char *_strchr(char *s, char c)
{
	int a;


	while (1)
	{
		a = *s++;
		if (a == c)
			return (s - 1);
		if (a == 0)
			return (NULL);
	}
}
