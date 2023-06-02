#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits.
 * Return: Results
 */

int main(void)
{
	int a1, a2, a3;

	for (a1 = 0; a1 < 8; a1++)
	{
		for (a2 = a1 + 1; a2 < 9; a2++)
		{
			for (a3 = a2 + 1; a3 < 10; a3++)
			{
				putchar((a1 % 10) + '0');
				putchar((a2 % 10) + '0');
				putchar((a3 % 10) + '0');

				if (a1 == 7 && a2 == 8 && a3 == 9)
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
