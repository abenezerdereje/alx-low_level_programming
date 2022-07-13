#include<stdio.h>
#include"main.h"

/**
 * print_array- prints n elements from an int array
 * @a: array pointer
 * @n: number of elements to print
 */
void print_array(int *a, int n)
{
	int i = 1;

	if (n > 0)
		printf("%d", a[0]);
	while (i < n)
	{
		printf(", %d", a[i]);
		i++;
	}
	printf("\n");
}
