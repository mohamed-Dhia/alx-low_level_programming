#include <stdio.h>
#include <string.h>

/**
 * puts2 - Entry point
 * Description: 'if you need a description to get this,
 * you really need to reconsider your decisions'
 * @str: sada
 * Return: Always 0 (Success)
 */
void puts2(char *str)
{
	int i;
	int len = strlen(str);

	for (i = 0; i < len; i = i + 2)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
