#include<stdlib.h>
#include<stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char out;

	for (out = '0'; out <= '9'; out++)
	{
		putchar(out);
	}
	for (out = 'a'; out <= 'f'; out++)
	{
		putchar(out);
	}
	putchar('\n');

	return (0);
}
