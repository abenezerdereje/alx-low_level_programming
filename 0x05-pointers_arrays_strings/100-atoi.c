#include"main.h"

/**
 * _atoi- converts string to int
 * @s: string
 *
 * Return: int in string or 0
 */
int _atoi(char *s)
{
	int num = 0, sign = 1, i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			if (num >= 214748364)
			{
				return (num * sign);
			}
			num = (num * 10) + (s[i] - 48);
			if (s[i + 1] < '0' || s[i] > '9')
			{
				return (num * sign);
			}
		}
		else if (s[i] == '-')
			sign *= -1;
		i++;
	}

	return (num * sign);
}
