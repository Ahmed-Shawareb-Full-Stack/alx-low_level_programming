#include<stdlib.h>
#include<stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int out;

	for (out= '0'; out <= '9'; out++)
	{
		putchar(out);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
