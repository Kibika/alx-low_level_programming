#include "main.h"
/**
 * print_alphabet -print_alphabet
 * Document: use _putchar function to write a function to print the alphabet
 * Return: nothing, void function
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
