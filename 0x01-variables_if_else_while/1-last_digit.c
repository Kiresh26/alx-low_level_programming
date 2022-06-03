#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int n;
	int p;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	p = n % 10;
	if (p == 0)
		printf("Last digit of %s is %s and is 0 ", n, p);
	else if (p > 5)
		printf("Last digit of %s is %s and is greater than 5", nu, p);
	else
		printf("Last digit of %s is %s and is less than 6 and not 0", n, p);
	return (0);
}
