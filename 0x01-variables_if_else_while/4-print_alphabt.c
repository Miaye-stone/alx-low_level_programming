#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all the alphabets except q and e using putchar
 *
 * Return: 0
 */

int main(void)
{
	char sm;

	for (sm = 'a'; sm <= 'z'; sm++)
	{
		if (sm != 'e' && sm != 'q')
		{
			putchar(sm);
		}
	}
	putchar('\n');

	return (0);
}
