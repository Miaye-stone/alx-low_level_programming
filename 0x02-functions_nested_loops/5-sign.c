#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: if n > 0 - +, < 0 - -,== 0 0
 * Return: 1 if greater than zero, 0 if zero and -1 if less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(n);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}

}
