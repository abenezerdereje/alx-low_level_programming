#include"main.h"

/**
 * print_last_digit- prints last digit of a number
 * @n: number to be computed
 *
 * Return: last digit of n
 */
int print_last_digit(int n)
{
	int a, b;

	if (n >= 0)
	{
		a = n % 10;
	}
	else
		a = (n * -1) % 10;
	b = 48 + a;
	_putchar(b);

	return (a);
}
