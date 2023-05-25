#include <stdio.h>
#include <stdlib.h>

/**
 * main - function with two arguments
 * @argc: int type argument count
 * @argv: char type argument array
 * Return: 0
 */

int main(int argc, char **argv)
{
	int cal;

	cal = 0;
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	while (cal < atoi(argv[1]))
	{
		printf("%02x", *((unsigned char *)main + cal));
		cal++;
		if (atoi(argv[1]) > cal)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
