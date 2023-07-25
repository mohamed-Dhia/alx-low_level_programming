#include <stdio.h>
#include <string.h>
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
