#include"main.h"

/**
 * print_diagonal- draws a diagonal line
 * @n: number of times \ should be printed
 */
void print_diagonal(int n)
{
	int i = 0;
	int j;

	while (i < n)
	{
		j = 0;
		while (j < i)
		{
			_putchar(' ');
			j++;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
	if (i <= 0)
		_putchar('\n');
}
