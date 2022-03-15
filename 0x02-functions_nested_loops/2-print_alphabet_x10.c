#include "main.h"
/**
 * print_alphabet_x10 -main function
 * Description: Prints alphabet 10 times
 * Return: nothing void
 */
void print_alphabet_x10(void)
{
	int i;
	char c = 'a';

	for (i = 1; i <= 10; i++)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
	}
}
