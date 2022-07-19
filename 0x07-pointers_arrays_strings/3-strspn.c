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
	int j, i = 0;

	if (s == NULL || accept == NULL)
		return (a);

	while (accept[i] != '\0')
	{
		j = 0;
		while (s[j] != '\0')
		{
			if (s[j] == accept[i])
			{
				a++;
				break;
			}
			j++;
		}
		i++;
	}

	return (a);
}
