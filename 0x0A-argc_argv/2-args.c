#include "main.h"
#include <stdio.h>
/**
 * main - pronts arguments passed
 * @argc: length of argv[]
 * @argv: array of arguments
 * Return: 0
 */
int main(int __attribute__((unused)) argc, char *argv[])
{
	int i;

	for (i = 0; argv[i]; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
