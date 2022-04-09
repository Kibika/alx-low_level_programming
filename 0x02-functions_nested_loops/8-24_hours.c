#include "main.h"
/**
 *
 */
void jack_bauer(void)
{
	int h = 0;
	int m = 0;
	
	for (h = 0; h <= 23; h++)
	{
		for (m = 0; m <= 59; m++)
		{
                _putchar(h);
                _putchar(':');
		_putchar(m);
		_putchar('\n');
		}
	}
}
