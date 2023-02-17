#include <stdlib.h>
#include <time.h>
/*
 * This is your fadas code
 *
 * Return = 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0);
	{
		printf("%i is positive\n", n);
	}
	else if (n == 0);
	{
		printf("%i is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
