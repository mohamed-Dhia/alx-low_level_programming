#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is %s\n", n, n > 0 ? "positive" : "negative");
	return (0);
}
