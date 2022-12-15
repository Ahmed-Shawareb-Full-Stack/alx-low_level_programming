#include "main.h"
/**
 *print_alphabet_x10 - print from a to z 10 times
 * 
 * Return: none
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char j;

	for (i, i <= 9; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);	
		}
		_putchar('\n');
	}
}
