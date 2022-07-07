#include<stdio.h>

/**
 * main- Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long a = 1;
	long b = 2;
	long c = 1;
	long temp;

	printf("%ld", a);
	printf(", %ld", b);
	while (c < 49)
	{
		printf(", %ld", a + b);
		temp = b;
		b = a + b;
		a = temp;
		c++;
	}
	printf("\n");

	return (0);
}
