#include<stdlib.h>
#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char * a = "a";
	char * z = "z";
	char alpha;

	for (; a <= z; a++)
	{
		putchar(a);
		putchar('\n');
	}

	return (0);
}
