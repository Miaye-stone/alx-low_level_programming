#include <stdio.h>
#include <stdlib.h>
/**
 * main - letters of the alphabet in lower then uppercase using putchar
 *
 * Return: 0
*/

int main(void)
{
	char sm;
	char big;

	for (sm = 'a'; sm <= 'z'; sm++)
	{
	putchar(sm);
	}

	for (big = 'A'; big <= 'Z'; big++)
	{
	putchar(big);
	}
	putchar('\n');
	return (0);
}
