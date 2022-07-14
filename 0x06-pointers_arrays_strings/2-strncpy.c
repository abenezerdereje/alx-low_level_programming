#include"main.h"

/**
 * _strncpy- copy max n number of character from src onto dest
 * @dest: original string
 * @src: string to copy onto dest
 * @n: max number of characters to be copied
 *
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		if (src[i] == '\0')
			break;
		i++;
	}

	return (dest);
}
