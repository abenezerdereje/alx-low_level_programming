#include"main.h"

/**
 * print_last_digit- prints last digit of a number
 * @n: number to be computed
 *
 * Return: last digit of n
 */
int print_last_digit(int n)
{
	int a = n % 10;

	_putchar(a);

	return (a);
}
