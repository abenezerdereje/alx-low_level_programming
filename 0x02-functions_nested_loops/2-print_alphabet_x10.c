#include"main.h"

/**
 * print_alphabet_x10- prints a-z 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int a = 1;

	while (a <= 10)
	{
		char c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		a++;
	}
}
