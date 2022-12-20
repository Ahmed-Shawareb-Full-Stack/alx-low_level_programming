#include "main.h"

/**
 * puts_half - print second have of a string
 * @s: input string
 */

void puts_half(char *s)
{
	int i = 0, len = 0, j;

	while (s[i++])
		len++;

	if ((len % 2) == 0)
		j = len / 2;

	else
		j = (len + 1) / 2;

	for (i = j; i < len; i++)
		_putchar(s[i]);

	_putchar('\n');
}
