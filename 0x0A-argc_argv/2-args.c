#include "main.h"
#include <stdio.h>

/**
 * main - program that prints all arguments
 * @argc: size of argv
 * @argv: array containing the program line arguments
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
