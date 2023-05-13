#include <stdio.h>
#include "main.h"
/**
 * @argv: array of pointers to arguement in strings
 * @argc: argument count
 * main - prints name of program
 * Return: 0
 **/

int main(int argc, char *argv[])
{
	if (argc > 0)
	printf("%s\n", *argv);
	return (0);
}
