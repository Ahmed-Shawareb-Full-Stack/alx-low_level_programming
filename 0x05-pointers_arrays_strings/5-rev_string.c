#include "main.h"
#include<string.h>
/**
 * rev_string - reverse a string
 *
 * @s: input string
 */

void rev_string(char *s)
{
	int len = strlen(s);
	char tmp;

	for (int i = len - 1; i >= len / 2; i--)
	{
		tmp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = tmp;
	}
}
