#include <stdio.h>
#include <string.h>

void rev_string(char *s)
{
	int i, j;
	char temp;
	int len = strlen(s) - 1;


	for (i = 0, j = len ; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
