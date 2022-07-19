#include"main.h"

/**
 * _strspn- gets length of a prefix substring
 * @s: original string
 * @accept: substring
 *
 * Return: number of bytes in s which consist of accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0;

	while (*accept++)
	{
		while (*s++)
		{
			if (*s == *accept)
			{
				a++;
				break;
			}
		}
	}

	return (a);
}
