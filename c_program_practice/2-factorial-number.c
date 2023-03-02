#include <stdio.h>

/* prints factorial of a given number */

void main(void)
{
	/* variable declaration */
	int input, i, fact = 1;

	/* read user input */
	printf("Enter any number: ");
	scanf("%d", &input);

	/* logic */
	for (i = 1; i <= input; i++)
		fact = fact * i;

	/* print result */
	printf("Factorial of %d is %d\n", input, fact);
}
