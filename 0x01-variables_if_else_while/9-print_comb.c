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
		if (out != '9')
		{
		putchar(out);
		putchar(',');
		putchar(' ');
		}else 
		{
		putchar(out);
		}
	}
	putchar('\n');

	return (0);
}
