#include <stdio.h>
#include <string.h>

/**
 * rev_string- Entry point
 * Description: 'if you need a description to get this, you really need to reconsider your decisions'
 * @s: ssadas
 * Return: Always 0 (Success)
 */
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
