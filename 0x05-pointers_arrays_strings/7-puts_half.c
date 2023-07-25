#include <stdio.h>
#include <string.h>
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
