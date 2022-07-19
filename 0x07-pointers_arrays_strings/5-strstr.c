#include"main.h"

/**
 * _strstr- locates a substring
 * @haystack: string to be searched
 * @needle: substring to search for
 *
 * Return: pointer to beginning of substring location
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j, a = -1;

	while (haystack[i] != '\0')
	{
		j = 1;
		if (haystack[i] == needle[0])
		{
			a = i;
			while (needle[j] != '\0')
			{
				if (haystack[i + j] != needle[j])
				{
					a = -1;
					break;
				}
				j++;
			}
			if (a != -1)
				return (haystack + a);
		}
		i++;
	}

	return (NULL);
}






