#include "main.h"
#include "stdio.h"
/**
 * main - print number of arguments passed
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
*/
int main(int argc, __attribute__((__unused__)) char *argv[])
{
	printf("%d\n", (argc - 1));
	return (0);
}
