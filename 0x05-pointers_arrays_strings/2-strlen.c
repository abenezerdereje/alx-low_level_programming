#include"main.h"

/**
 * _strlen- calculates length of a string
 * @s: pointer of string
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int i = 0;
	int ctr = 0;

	if (s)
	{
		while (*(s + i) != '\0')
		{
			ctr++;
			i++;
		}
	}

	return (ctr);
}
