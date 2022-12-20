#include "main.h"
#include<string.h>

/**
 * print_rev - print string reversed
 * @s: input string
 */

void print_rev(char *s)
{
	int i;

	for(i = strlen(s)--; strlen(s) >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
