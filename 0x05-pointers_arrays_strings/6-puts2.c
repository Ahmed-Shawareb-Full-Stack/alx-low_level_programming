#include"main.h"

/**
 * puts - print one out of 2
 * @s: input string
 * Description: print 1 out of 2
 */

void puts2(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(s[i]);
	}
	_putchar('\n');
}
