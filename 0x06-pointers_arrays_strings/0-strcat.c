#include "main.h"
#include<string.h>

/**
 * _strcat - concatenates two strings
 * @dest: first string
 * @src: seconed string
 * Return: the first string concatenated with te second string
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);

	return (dest);
}
