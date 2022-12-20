#include "main.h"
/**
 * _puts - print the input string followed by a new line
 * @s: input string
 * Return: no retur
 */

int _puts( *s)
{
	while (*s)
		_putchar(*++s);
	_putchar('\n');
}
