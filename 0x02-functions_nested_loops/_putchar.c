#iunclude<unistd.h>
/**
 * _putchar - writes the input to the stdout
 *
 * @c the input char to print
 *
 * Return: On success 1
 * Return: On error -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
