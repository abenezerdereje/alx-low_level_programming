#include"main.h"

/**
 * _strchr- locate a charcter in a string
 * @s: string
 * @c: character
 *
 * Return: first occurence of character
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}

	return (NULL);
}
