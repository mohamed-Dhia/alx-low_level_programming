#include <stdio.h>
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
