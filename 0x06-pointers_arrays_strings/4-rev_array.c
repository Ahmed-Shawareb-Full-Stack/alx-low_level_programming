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
	int h;

	for (i = 0; i < (n / 2); i++)
	{
		h = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = h;
		_putchar(h);
	}


}
