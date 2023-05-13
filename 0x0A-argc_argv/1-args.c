#include <stdio.h>
#include "main.h"

/**
 * main - prints a number passed into it
 * @argc: size of argv
 * @argv: array containg vector of  argument
 * Return : 0
 **/
int main(int argc, char *argv[])
{
(void) argv;
	printf("%d\n", argc - 1);

return (0);
}
