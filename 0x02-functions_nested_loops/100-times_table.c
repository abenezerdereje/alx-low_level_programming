#include"main.h"

/**
 * print_times_table- prints time table from 0 to n
 * @n: limit of the time table
 */
void print_times_table(int n)
{
	int a = 0;

	while (a <= n && n <= 15 && n >= 0)
	{
		int b = 0;

		_putchar('0');
		while (b <= n)
		{
			if ((a * b) < 10 && b > 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(48 + ((a * b) % 10));
			}
			else if ((a * b) < 100 && b > 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(48 + ((a * b) / 10));
				_putchar(48 + ((a * b) % 10));
			}
			else if ((a * b) < 1000 && b > 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(48 + ((a * b) / 100));
				_putchar(48 + (((a * b) / 10) % 10));
				_putchar(48 + ((a * b) % 10));
			}
			b++;
		}
		_putchar('\n');
		a++;
	}
}
