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

	for (ch1 = '0'; ch1 <= '9'; ch1++)
	{
		for (ch2 = ch1 + 1; ch2 <= '9'; ch2++)
		{
			putchar(ch1);
			putchar(ch2);
			if (ch1 != '8')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
