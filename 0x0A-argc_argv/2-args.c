#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments it receives.
 * @argc: size of argv .
 * @argv: the vector of an array arguments .
 * Return: 0
 */
int main(int argc, char *argv[])
{
	while (*argv)
	{
		(void) argc;
		printf("%s\n", *argv++);
	}
		return(0);
}
