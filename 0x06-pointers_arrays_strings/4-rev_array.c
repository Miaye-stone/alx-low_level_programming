#include "main.h"
/**
 * reverse_array - reverses the content of an array of int
 * @a: array
 * @n: nos of elements of array a
 * Return: none
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;
	int temp;

	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = *(a + j);
			*(a + j) = *(a + (j - 1));
			*(a + (j - 1)) = temp;
		}
	}
}
