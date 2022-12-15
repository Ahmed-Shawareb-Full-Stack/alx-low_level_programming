#include "main.h"
/**
 * _isLower - print by using _putchar
 *
 * Return: 1 if lowercase
 */

int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			lower = 1;
	}

	return (lower);
}
