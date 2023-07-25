#include <stdio.h>

/**
 * print_array - Entry point
 * Description: 'if you need a description to get this,
 * you really need to reconsider your decisions'
 * @a: sadsadas
 * @n: sadadsa
 * Return: Always 0 (Success)
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != 0)
		{
			putchar(',');
			putchar(' ');
		}
		printf("%d", *(a + i));
	}
	putchar('\n');
}
