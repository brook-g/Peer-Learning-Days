#include <stdio.h>

/* 07L07: Demonstrating nested loops */

main()
{
	int i, j;

	for (i = 1; i <= 3, i++)
	printf("The start of iteration %d of the outer loop.\n", i);
	{
		for (j = 1; j <= 4, j++)
		{
			printf("	Iteration %d of the inner loop.\n", j);
		}
	printf("The end of iteration %d of the outer loop.\n", i);
	}
	return (0);
}
