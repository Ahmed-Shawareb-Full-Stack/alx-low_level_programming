#include<stdlib.h>
#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a = "a";
	char z = "z";

	for (char alpha = a; alpha <= z; alpha++)
	{
		putchar(alpha);
		putchar('\n');
	}

	return (0);
}
