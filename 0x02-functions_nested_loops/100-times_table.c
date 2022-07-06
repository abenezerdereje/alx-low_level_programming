#include"main.h"

/**
 * print_times_table- prints time table from 0 to n
 * @n: limit of the time table
 */
void print_times_table(int n)
{
	int a = 0;

	while (a <= n)
	{
		int b = 0;

		_putchar('0');
		while (b <= n)
		{
			int c = a * b;

			if (c < 10 && b > 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(48 + (c % 10));
			}
			else if (c < 100 && b > 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(48 + (c / 10));
				_putchar(48 + (c % 10));
			}
			else if (c < 1000 && b > 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(48 + (c / 1000));
				_putchar(48 + ((c / 100) % 10));
				_putchar(48 + (c % 10));
			}
			b++;
		}
		_putchar('\n');
		a++;
	}
}
