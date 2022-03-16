#include <stdio.h>
/**
 * main -main
 * Return: sum of i
 */
int main(void)
{
	int i;
	int n = 1024;
	int sum = 0;

	for (i = 0; i < n; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum += i;
		}
	}
	printf("%d\n", sum);

	return (sum);
}
