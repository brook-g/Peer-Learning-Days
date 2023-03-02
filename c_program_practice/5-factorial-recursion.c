#include <stdio.h>

/* prints factorial of a number using recursion */

int Factorial(int input);

void main(void)
{
	/* variable declaration */
	int n;

	/* read user input */
	printf("Enter first number: ");
	scanf("%d", &n);

	/* print result */
	printf("Factorial of %d is %d\n", n, Factorial (n));
}

/**
 * Factorial(int input): prints factorial of a number
 * @input: user input
 * Return: factorial of a number
 */

int Factorial(int input) /* function definition */
{
	if(input == 0)
		return 1;
	else
	return input*Factorial(input - 1);
}
