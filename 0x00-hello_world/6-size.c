#include<stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a = 'a';
	int b = 1;
	long int c = 2;
	long long int d = 3;
	float e = 4;

	printf("Size of char: %lu byte(s)\n", sizeof(a));
	printf("Size of int: %lu byte(s)\n", sizeof(b));
	printf("Size of long int: %lu byte(s)\n", sizeof(c));
	printf("Size of long long int: %lu byte(s)\n", sizeof(d));
	printf("Size of float: %lu byte(s)\n", sizeof(e));

	return (0);
}
