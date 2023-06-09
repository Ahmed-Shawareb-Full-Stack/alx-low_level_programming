#include "main.h"
/**
 * _puts - print the input string followed by a new line
 * @s: input string
 * Return: no retur
 */

void _puts(char *s)
{
	while (*s)
		_putchar(*s++);
	_putchar('\n');
}
