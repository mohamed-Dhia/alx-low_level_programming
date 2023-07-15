#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch1;
	int ch2;

	for (ch1 = 0; ch1 < 100; ch1++)
	{
		for (ch2 = 0; ch2 < 100; ch2++)
		{
			if (ch1 < ch2)
			{
				putchar((ch1 / 10) + '0');
				putchar((ch1 % 10) + '0');
				putchar(' ');
				putchar((ch2 / 10) + '0');
				putchar((ch2 % 10) + '0');
				if (ch1 != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
