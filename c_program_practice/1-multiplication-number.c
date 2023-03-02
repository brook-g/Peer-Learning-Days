# include <stdio.h>

/* prints a multiplication table of a number */

void main(void)
{
	/* variable declaration */
	int input, i;

	/* read user input */
	printf("Enter any number: ");
	scanf("%d", &input);

	/* logic */
	for (i = 1; i <= 10; i++)
		printf("%d x %d = %d\n", input, i, input * i);
}
