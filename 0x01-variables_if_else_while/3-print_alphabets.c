#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
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
	big = toupper(sm);

	putchar(sm);
	putchar(big);
	}
	putchar('\n');

	return (0);
}
