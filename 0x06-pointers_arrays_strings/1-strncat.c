#include"main.h"

/**
 * _strncat- concatenates a maximum of n charcters from src onto dest
 * @dest: destination string
 * @src: string to be added to dest
 * @n: max number of characters to be appended
 *
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;
	while (j > n)
	{
		if (src[j] == '\0')
			break;
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
