#include <stdio.h>
#include <stdlib.h>
/**
 * main - all the numbers of base 16 in lowercase
 *
 * Return: 0
 */

int main(void)
{
	int num;
	char alph;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');
	}
	for (alph = 'a'; alph <= 'f'; alph++)
	{
		putchar(alph);
	}
	putchar('\n');

	return (0);
}
