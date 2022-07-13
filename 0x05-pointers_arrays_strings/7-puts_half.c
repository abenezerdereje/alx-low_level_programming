#include"main.h"

/**
 * puts_half- prints last half of a string
 * @str: string
 */
void puts_half(char *str)
{
	int i = 0, j = 0;

	while (*(str + j) != '\0')
		j++;
	i = j / 2;
	while (i < j)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
