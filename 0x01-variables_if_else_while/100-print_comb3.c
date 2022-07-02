#include<stdio.h>

/**
 * main- Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int b;

	a = 48;
	while (a < 58)
	{
		b = 48;
		while (b < 58)
		{
			if (b > a)
			{
				putchar(a);
				putchar(b);
				putchar(',');
				putchar(' ');
			}
			b++;
		}
		a++;
	}
	putchar('\n');

	return (0);
}

