#include<stdlib.h>
#include<stdio.h>
#include<time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha != 'q' || alpha != 'e')
		{
			putchar(alpha);
		}
	}

	return (0);
}
