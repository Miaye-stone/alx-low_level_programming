#include <stdio.h>
#include <stdlib.h>
/**
 * main - all possible combinations of single-digit numbers using putchar
 *
 * Return: 0
 */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
		if (n < 9)
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
