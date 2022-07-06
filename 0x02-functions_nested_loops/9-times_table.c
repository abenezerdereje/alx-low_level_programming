#include"main.h"

/**
 * times_table- prints time table of upto 9
 */
void times_table(void)
{
	int a = 0;

	while (a < 10)
	{
		int b = 0;

		while (b < 10)
		{
			int c = a * b;
			char d = 48 + (c / 10);
			char e = 48 + (c % 10);

			if (c < 10)
				_putchar(e);
			else
			{
				_putchar(d);
				_putchar(e);
			}
			_putchar(',');
			if (b != 9)
			{
				_putchar(' ');
				_putchar(' ');
			}
			b++;
		}
		_putchar('\n');
		a++;
	}
}
