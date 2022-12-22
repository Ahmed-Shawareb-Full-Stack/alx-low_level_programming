#include "main.h"
#include<string.h>

/**
 * _strncat - concatenate strings with n limimt
 * @dest:first string
 * @src:second string
 * @n: limit n
 * Return: new cncatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);

	return (dest);
}
