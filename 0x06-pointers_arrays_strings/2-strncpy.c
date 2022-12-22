#include "main.h"
#include<string.h>

/**
 * _strncpy - copy a text to a dest
 * @dest: text copy destination
 * @src: text to be copied
 * @n: limit of text
 * return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (i < n)
	{
		for (; i < n; i++)
			dest[i] = '\0';
	}
	return (dest);
}
