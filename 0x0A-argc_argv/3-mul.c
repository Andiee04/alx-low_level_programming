#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - print results of the product of argument numbers
 * @argc: argument counter
 * @argv: numbers to multiply
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int x = 0;

	if (argc == 3)
	{
		x = atoi(argv[1]) * atoi(argv[2]);

			printf("%d\n", x);
			return (0);
	}
	else
	{
	printf("Error\n");
	}
	return (1);
}
