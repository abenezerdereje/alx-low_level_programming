#include"main.h"

/**
 * puts2- printes every other character of a string starting with the first
 * @str: string
 */
void puts2(char *str)
{
	int i = 0, j = 0;

	while (*(str + j) != '\0')
	{
		j++;
	}
	while (i < j)
	{
		if (i % 2 == 0)
			_putchar(*(str + i);
		i++;
	}
}
