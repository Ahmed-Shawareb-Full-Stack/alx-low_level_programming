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
	char * alpha;

	for (alpha = a; alpha <= z; alpha++)
	{
		putchar("%c", alpha);
		putchar('\n');
	}

	return (0);
}
