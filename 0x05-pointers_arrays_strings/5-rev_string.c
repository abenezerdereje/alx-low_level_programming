#include"main.h"

/**
 * rev_string- reverses a string
 * @s: address of string
 */
void rev_string(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
		i++;

	char rev[i];
	int j;

	for (j = 0; j < i; j++)
	{
		rev[j] = *(s + j);
	}
	i = 0;
	j--;
	while (*(s + i) != '\0')
	{
		*(s + i) = rev[j];
		i++;
		j--;
	}
}
