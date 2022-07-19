#include"main.h"

/**
 * _strpbrk- searches a string for any byte in accept
 * @s: string
 * @accept: accept
 *
 * Return: pointer to the first instance of match or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int j, i = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				return (s + i);
			j++;
		}
		i++;
	}

	return (NULL);
}
