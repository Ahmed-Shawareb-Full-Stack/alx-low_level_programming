#include "main.h"
#include<array>

/**
 * reverse_array - print reverse array
 * @a: array
 * @n: arraysize
 */

void reverse_array(int *a, int n)
{
	int i;
	
	i = n
	while(i > 0)
	{
		if (i != 0)
		{
			_putchar(',');
			_putchar(' ');
		}
		_putchar(a[i]);
	}
	_putchar('\n');
}
