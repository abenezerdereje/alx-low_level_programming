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
	if (j % 2 == 0)
		i = j / 2;
	else
		i = j / 2 + 1;
	while (i < j)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
