#include <stdio.h>

/* prints sum of n natural numbers */

void main(void)
{
	/* declare variables */
	int input, i, sum = 0;

	/* get user input */
	printf("Enter any number: ");
	scanf("%d", &input);

	/* logic */
	for (i = 1; i <= input; i++)
		sum = i + sum;

	/* print result */
	printf("The sum of %d natural numbers is %d\n", input, sum);
}
