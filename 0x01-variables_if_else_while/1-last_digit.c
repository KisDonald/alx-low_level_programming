nclude < stdlib.h >
#include <time.h>
#include <stdio.h>
/**
 * main - The last digit
 *
 * Return : 0
*/
int main(void)
{
		int n;
		int x;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
				x = n % 10;
				printf("Last digit of %d is %d ", n, x);
				if (x > 5)
				{
					printf("and ia greater than 5");
				if  (x == 0)
				}
				if (x < 6 && != 0)
				{
					printf("and less than 6 and not 0");
				}
				printf("\n");
					return (0);
}
