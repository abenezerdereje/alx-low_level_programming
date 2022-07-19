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

	while (*s++)
	{
		if (*s == c)
		{
			return (s);
		}
		if (!*s)
		{
			return (NULL);
		}
	}

	return (NULL);
}
