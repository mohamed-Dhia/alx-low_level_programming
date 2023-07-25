#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev- Entry point
 * Description: 'if you need a description to get this,
 * you really need to reconsider your decisions'
 * @s: stuff
 * Return: Always 0 (Success)
 */
void print_rev(char *s)
{
	int i;
	int len =  strlen(s);

	for (i = len - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
