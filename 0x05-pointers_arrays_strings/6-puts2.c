#include"main.h"

/**
 * puts - print one out of 2
 * @s: input string
 */

void puts2(char *s)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
