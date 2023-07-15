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
	int last_digit;
	char core[40];

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last_digit = n % 10;

	sprintf(core, "Last digit of %d is %d and is ", n, last_digit);

	if (last_digit == 0)
		printf("%s0\n", core);
	else if (last_digit < 5)
		printf("%sless than 6 and not 0\n", core);
	else
		printf("%sgreater than 5\n", core);

	return (0);
}
