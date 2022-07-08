#include"main.h"

/**
 * more_numbers- prints from 0 to 14, 10 times
 */
void more_numbers(void)
{
	int i;
	int j;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 15)
		{
			if (j >= 10)
				_putchar(48 + (j / 10));
			_putchar(48 + (j % 10));
			j++;

		}
		_putchar(10);
		i++;
	}
}
