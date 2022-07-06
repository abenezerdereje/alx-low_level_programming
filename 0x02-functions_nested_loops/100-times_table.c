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

		while (b <= n)
		{
			int c = a * b;
			char d = 48 + (c / 100);
			char e = 48 + (c / 10);
			char f = 48 + (c % 10);
			char g = 48 + (c / 1000);

			if (b == 0)
				_putchar(e);
			else if (c < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(f);
			}
			else if (c < 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(e);
				_putchar(f);
			}
			else if (c < 1000)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(d);
				_putchar(e);
				_putchar(f);
			}
			else
			{
				_putchar(',');
				_putchar(g);
				_putchar(d);
				_putchar(e);
				_putchar(f);
			}
			b++
		}
		_putchar('\n');
		a++;
	}
}
