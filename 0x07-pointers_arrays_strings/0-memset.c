#include"main.h"

/**
 * _memset- fills first n bytes of memory area with constant
 * @s: memory area pointed to by s will be filled
 * @b: constant to fill mem area
 * @n: number of bytes to be filled
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

