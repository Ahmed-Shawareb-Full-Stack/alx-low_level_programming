#include "main.h"
/**
 * _islower - print by using _putchar
 * @c: input char
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
