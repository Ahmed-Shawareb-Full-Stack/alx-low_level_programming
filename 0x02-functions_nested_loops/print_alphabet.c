#include<main.h>
/**
 * print_alphabet - print form a => z
 *
 * Return: none
 */

void print_alphabet(void)
{
	char i;

	for(i= 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	putchar('\n');
}
