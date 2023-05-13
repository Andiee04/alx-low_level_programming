#include <stdio.h>
#include "main.h"

/**
 * main - prints a number passed into it
 * @argc: size of argv
 * @argv: array containg vector of  argument
 * return : 0
 **/
int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
	printf("%d\n", argc - 1);

return (0);
}
