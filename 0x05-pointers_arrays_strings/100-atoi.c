#include "main.h"
#include<ctype.h>

/**
 * _atoi - return the numbers in a text
 * @s: input string
 */

int _atoi(char *s)
{
	int result = 0;  
	int sign = 1;    
	int i = 0;       

	while (isspace(s[i])) {
		i++;
	}



	if (s[i] == '+' || s[i] == '-') {
		if (s[i] == '-') {
			sign = -1;
		}
		i++;
	}



	while (isdigit(s[i])) {
		result = result * 10 + (s[i] - '0');
		i++;
	}


	return sign * result;
}
