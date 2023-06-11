#include<stdio.h>

/**
 * main: program print the number of args
 * @argc: the number of args
 * @argv:array of pointers to the args
 *
 * return: 0
 */

int main(int argc,char __attribute__((__unused__)) *argv[])
{
	printf("%d\n" , argc - 1);

	return (0);
}
