#include "main.h"

/**
 * _strcpy - Entry point
 * Description: 'if you need a description to get this,
 * you really need to reconsider your decisions'
 * @dest: sadsad
 * @src: sdadas
 * Return: Always 0 (Success)
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
	{
		dest[i] = *(src + i);
	}
	dest[i] = '\0';

	return (dest);
}
