#include <stdio.h>

/**
 * main - prime numbers
 *
 * Return: 0
 */

int main(void)
{
	long mainum = 612852475143;
	long prnfinder = 2;
	long larg_prim = 0;

	while (mainum != 1)
	{
		if (mainum % prnfinder == 0)
		{
			mainum = mainum / prnfinder;
			larg_prim = prnfinder;
		}
		prnfinder += 1;
	}
	printf("%ld\n", larg_prim);
	return (0);
}
