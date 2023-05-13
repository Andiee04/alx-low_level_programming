#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - prints out the change of code
 * @argc: number of arguments to be passed
 * @argv: number of arguments vectors
 * Return: 0
 */

int main(int argc, char **argv)
{
	int coin, dinero;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	dinero = atoi(argv[1]);

	for (coin = 0; dinero > 0; coin++)
	{
		if (dinero - 25 >= 0)
			dinero = dinero - 25;
		else if (dinero - 10 >= 0)
			dinero = dinero - 10;
		else if (dinero - 5 >= 0)
			dinero = dinero - 5;
		else if (dinero - 2 >= 0)
			dinero = dinero - 2;
		else if (dinero - 1 >= 0)
			dinero = dinero - 1;
	}
	printf("%d\n", coin);
	return (0);
}
