#include "main.h"
#include<stdio.h>
/**i
 * print_array - print content of array
 * @a: input array
 * @n: type integer
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
