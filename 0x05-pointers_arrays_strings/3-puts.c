#include <stdio.h>
#include <string.h>

/**
 * _puts - Entry point
 * Description: 'if you need a description to get this, you really need to reconsider your decisions'
 * @str: stuff
 * Return: Always 0 (Success)
 */
void _puts(char *str)
{
	int i;

	for (i = 0; *(str + i) != 0; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
