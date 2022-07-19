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
	int i = 0, j;

	while (haystack[i] != '\0')
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			while (needle[++j] != '\0')
			{
				if (haystack[i + j] != needle[j])
				{
					a = -1;
					break;
				}
				else if(needle[j + 1] == '\0')
					return (haystack + i);
				j++;
			}
		}
		i++;
	}

	return (NULL);
}






