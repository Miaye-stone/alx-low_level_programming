#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c: is the char to be checked
 * Return: 0 if lowercase 1 if not
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
