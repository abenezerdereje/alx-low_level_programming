#include"main.h"

/**
 * jack_bauer- counts every minute of the day
 */
void jack_bauer(void)
{
	int a = 0;

	while (a < 24)
	{
		int b = 0;

		while (b < 60)
		{
			char c = 48 + (a / 10);
			char d = 48 + (a % 10);
			char e = 48 + (b / 10);
			char f = 48 + (b % 10);

			_putchar(c);
			_putchar(d);
			_putchar(':');
			_putchar(e);
			_putchar(f);
			_putchar('\n');
			b++;
		}
		a++;
	}
}



