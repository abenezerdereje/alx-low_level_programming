#include"main.h"

/**
 * print_rev- prints the reverse of a string followed by new line
 * @s: address of string
 */
void print_rev(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
		i++;

	i--;
	while (i >= 0)
	{
		_putchar(*(s + i));
		i--;
	}
}
