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
	int j, k, i = 0;

	while (s[i] != '\0')
	{
		j = 0;
		k = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				a++;
				k++;
				break;
			}
			j++;
		}
		if (k == 0)
			return (a);
		i++;
	}

	return (a);
}
