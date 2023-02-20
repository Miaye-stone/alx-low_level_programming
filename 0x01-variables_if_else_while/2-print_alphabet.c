#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - print all the letters of the alphabet in lowercase using putchar
 *
 * Return: 0
*/

int main(void)
{
	char letter;

	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		char low = tolower(letter);

		putchar(low);
	}

	return (0);
}

