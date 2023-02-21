#include <stdio.h>
#include <stdlib.h>
/**
 * main - combination of two digits
 *
 * Return: 0
 */

int main(void)
{
	int i, j;

	for  (i = 0; i < 9; i++)
	{
		for (j = i; j < 10; j++)
		{
			putchar((i % 10) + '0');
			putchar((j % 10) + '0');

			if (i == 8 && j == 9)
			{
				continue;
			}
				putchar(',');
				putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
