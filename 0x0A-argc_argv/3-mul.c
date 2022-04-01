#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiply two arguments
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 or 1 if error
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	if (argv[1] && argv[2])
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
		printf("Error\n");

	return (1);
}
