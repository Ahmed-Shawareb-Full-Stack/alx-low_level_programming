#include "main.h"
#include<string.h>

/**
 * _strncpy - copy a text from src to a dest
 * @dest: text copy destination
 * @src: text to be copied
 * @n: limit of text
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);

	return (dest);
}
