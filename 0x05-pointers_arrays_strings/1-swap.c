#include"main.h"

/**
 * swap_int- swaps two int variables
 * @a: address of first variable
 * @b: address of second variable
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
