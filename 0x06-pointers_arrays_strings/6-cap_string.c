#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @str: string
 * Return: dest
 */

char *cap_string(char *str)
{
	int index = 0, i;
	int spe_words[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(str + index) >= 97 && *(str + index) <= 122)
	{
		*(str + index) = *(str + index) - 32;
	}
	index++;
	while (*(str + index) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*(str + index) == spe_words[i])
			{
				if ((*(str + (index + 1)) >= 97) && (*(str + (index + 1)) <= 122))
					*(str + (index + 1)) = *(str + (index + 1)) - 32;
				break;
			}
		}
		index++;
	}
	return (str);
}
