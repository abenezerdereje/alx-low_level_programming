#include"main.h"

/**
 * _puts- prints a string followed by a new line
 * @s: address of string
 */
void _puts(char *s)
{
	int i = 0;

	while (*(s + i) != 0)
	{
		_putchar(*(s + i));
		i++;
	}
	_putchar('\n');
}
