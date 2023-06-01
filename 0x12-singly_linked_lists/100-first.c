#include <stdio.h>

/**
 * flist - print a sample before main does.
 * Return: void
 */

void flist(void) __attribute__ ((constructor));

void flist(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
