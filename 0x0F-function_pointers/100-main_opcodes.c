#include <stdio.h>
#include <stdlib.h>


/**
 * main - prints its own opcodes
 * @argc: argument count
 * @argv: array of arguments
 *
 * Return: always zero
 */
int main(int argc, char *argv[])
{
	int bytes, i;
	char *arr = (char *) main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}


	for (i = 0; i < bytes; i++)
	{
		printf("%02x", arr[i] & 0xFF);
		if (i != bytes - 1)
		{
			printf(" ");
		}
	}

	printf("\n");
	return (0);
}
