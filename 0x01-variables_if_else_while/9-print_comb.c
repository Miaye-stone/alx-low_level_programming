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
		putchar((n % 10) + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
