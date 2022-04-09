# include <stdio.h>
/**
 * main -main
 * Document: print combinations of three numbers
 * Return: 0
 */
int main(void)
{
	int i = 0, j, k, l;

	while (i < 1000)
	{
		j = i / 100;
		k = (i / 10) % 10;
		l = i % 10;

		if (j < k && k < l)
		{
			putchar(j + '0');
			putchar(k + '0');
			putchar(l + '0');

			if (i < 700)
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
