#include "main.h"
/**
 * string_toupper - change lowercase to uppercase
 * @b: pointer
 * Return: b
 */
char *string_toupper(char *b)
{
	int i = 0;

	while (b[i] != '\0')
	{
		if (b[i] >= 'a' && b[i] <= 'z')
		{
			b[i] = b[i] - 32;
		}
		i++;
	}
	return (b);

}
