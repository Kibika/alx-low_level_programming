#include <stdio.h>
/**
 * main - main
 * Document: prints double digits
 * the two numbers should be different
 * kj!=jk
 * Return: 0
 */
int main(void)
{
	int i = 0;
	int j;
	int k;

	while (i < 100)
	{
		j = i % 10;
		k = i / 10;

		if (k < j)
		{
			putchar(k + '0');
			putchar(j + '0');

			if (i < 89)
			{
				putchar(44);
				putchar(32);
			}
		}
		i++;
	}
	putchar('\n');

	return (0);
}
