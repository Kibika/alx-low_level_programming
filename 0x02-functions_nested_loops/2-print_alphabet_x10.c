#include "main.h"
/**
 * print_alphabet_x10 -main function
 * Description: Prints alphabet 10 times
 * Return: nothing void
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char c = 'a';

	while (i < 10)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
