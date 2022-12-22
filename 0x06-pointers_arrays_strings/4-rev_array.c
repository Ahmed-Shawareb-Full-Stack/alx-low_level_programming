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

	for (i = n; i > 0; i--)
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
