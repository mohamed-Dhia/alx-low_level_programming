#include <stdio.h>
#include <string.h>

/**
 * puts_half - Entry point
 * Description: 'if you need a description to get this, you really need to reconsider your decisions'
 * @str: sasadaas
 * Return: Always 0 (Success)
 */
void puts_half(char *str)
{
	int i;
	int len = strlen(str);

	if (len % 2)
		i = (len - 1) / 2;
	else
		i = len / 2;

	for (; i < len; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
