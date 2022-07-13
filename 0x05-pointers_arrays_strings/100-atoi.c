#include"main.h"

/**
 * _atoi- converts string to int
 * @s: string
 *
 * Return: int in string or 0
 */
int _atoi(char *s)
{
	int num, sign = 1;

	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
			num = (num * 10) + (s[i] - 48);
		else if (s[i] == '-')
			sign *= -1;
		i++;
	}

	return (num);
}
