#include "main.h"

/**
 * _puts - prints a string
 * @str: input string
 * Return: nothing
 */
void _puts(char *s)
{
	int count = 0;

	while (count >= 0)
	{
		if (s[count] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(s[count]);
		count++;
	}
}
