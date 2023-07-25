#include "main.h"
#include <stdio.h>
#include <string.h>

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
