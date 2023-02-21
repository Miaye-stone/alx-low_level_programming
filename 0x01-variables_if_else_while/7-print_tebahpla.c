#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the leters of the alphabet in reverse
 *
 * Return: 0
 */

int main(void)
{
	char sm;

	for (sm = 'z'; sm >= 'a'; sm--)
	{
		putchar(sm);
	}
	putchar('\n');

	return (0);
}
