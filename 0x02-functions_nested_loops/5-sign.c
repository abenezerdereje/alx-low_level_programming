#include"main.h"

/**
 * print_sign- prints the sign of a number
 * @n: number to be checked
 *
 * Return: 1 and print + if positive. 0 if n is 0. -1 nd print - if negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');

		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');

		return (-1);
	}
	else
		return (0);
}
