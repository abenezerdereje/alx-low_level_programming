#include"main.h"

/**
 * strcpy- copies src into dest
 * @dest: string to be copied into
 * @src: string to be copied
 *
 * Return: pointer to dest
 */
char *strcpy(char *dest, char *src)
{
	int i = 0, j = 0;

	while (*(src + j) != '\0')
		j++;
	while (i <= j)
	{
		*(dest + i) = *(src + i);
		i++;
	}

	return (&dest);
}
