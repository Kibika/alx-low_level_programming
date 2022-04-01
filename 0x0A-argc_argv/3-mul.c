#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiply two arguments
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 or 1 if error
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc > 1)
	{
		i = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", i);
		return (0);
	}
	else
	{
		printf("%s\n", "Error");
		return (1);
	}
	return (0);
}
