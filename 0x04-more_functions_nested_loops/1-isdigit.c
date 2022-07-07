#include"main.h"

/**
 * _isdigit- checks if a charcter is a digit
 * @c: character
 *
 * Return: 1 if c is digit. 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
