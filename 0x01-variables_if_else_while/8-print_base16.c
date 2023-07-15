#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */
int main(void)
{
	char base16[16] = "0123456789abcdef";
	int i;

	for (i = 0; i < 16; i++)
		putchar(base16[i]);

	putchar('\n');

	return (0);
}
