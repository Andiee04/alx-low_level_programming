#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - print the sum of variables
 * @argc: number of arguments
 * @argv: vector of arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
	int x, y, varia;

	for (x = 1; x < argc; x++)
	{
		for (b = 0; argv[x][y] != '\0'; y++)
		{
			if (!isdigit(argv[x][y]))
			{
				printf("Error\n");
				return (1);
			}
		}
		varia = varia + atoi(argv[x]);
	}
	printf("%i\n", varia);
	return (0);
}
