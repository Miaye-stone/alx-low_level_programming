#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s: string.
 * Return: dest.
 */

char *leet(char *s)
{
	int a = 0, i;
	int low[] = {97, 101, 111, 116, 108};
	int up[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	while (*(s + a) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(s + a) == low[i] || *(s + a) == up[i])
			{
				*(s + a) = numbers[i];
				break;
			}
		}
		a++;
	}
	return (s);
}
