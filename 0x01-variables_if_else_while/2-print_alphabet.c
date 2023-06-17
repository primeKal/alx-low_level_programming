#include <stdio.h>

/**
 * main - prints the lower case alphabets
 *
 * Return: Always zero
 */
int main(void)
{
	char letters[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;
	for(i = 0; i < 26; i++)
	{
		putchar(letters[i]);
	}
	putchar('\n');
	return(0);
}
