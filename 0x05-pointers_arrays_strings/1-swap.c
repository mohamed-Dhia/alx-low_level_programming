#include "main.h"

/**
 * swap_int- Entry point
 * Description: 'if you need a description to get this, you really need to reconsider your decisions'
 * @a: stuuuf
 * @b: moar stuff
 * Return: Always 0 (Success)
 */
void swap_int(int *a, int *b)
{
	int holder;

	holder = *a;
	*a = *b;
	*b = holder;
}
