#include<stdio.h>

/**
 * main- Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	a = 48;
	while (a < 58)
	{
		putchar(a);
		if (a == 57)
			;
		else
		{
			putchar(',');
			putchar(' ');
		}
		a++;
	}
	putchar('\n');

	return (0);
}
