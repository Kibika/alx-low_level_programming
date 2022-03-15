#include "main.h"
/**
 * main -main
 * Description: Use _putchar function to print _putchar
 * _putchar takes a character and returns a character
 * Return:0
 */
int main(void)
{
	char word[] = "_putchar";
	int i = 0;

	while (word[i] != '\0')
	{
		_putchar(word[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
