#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * num_checker - checks if char is number
 * @x: char to be processed
 * Return: 1, if its a number, else 0
 **/
int num_checker(char *a)
{
	int x, num, len;

	x = 0;
	num = 0;
	len = strlen(a);
	while (x < len)
	{
		if (a[x] < '0' || a[x] > '9')
		{
			return (-1);
		}
		else
			num = num * 10 + (a[x] - '0');
		x++;
	}
	return (num);
}
/**
 * main - add positive numbers
 * @argc: arguement count
 * @argv: array of arguement vector
 * Return: result
 */
int main(int argc, char *argv[])
{
	int x, num, sum;

	sum = 0;
	for (x = 1; x < argc; x++)
	{
		num = num_checker(argv[x]);
		if (num == -1)
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
