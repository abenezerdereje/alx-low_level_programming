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
	int c;

	a = 48;
	while (a < 58)
	{
		b = 48;
		while (b < 58)
		{
			c = 48;
			while (c < 58)
			{
				if (c > b && b > a)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (a != 55)
					{
						putchar(',');
						putchar(' ');
					}
				}
				c++;
			}
			b++;
		}
		a++;
	}
	putchar('\n');

	return (0);
}
