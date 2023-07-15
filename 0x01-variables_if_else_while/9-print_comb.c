#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = '0' ; ch <= '9' ; ch++)
	{
		putchar(ch);
		if (ch != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
