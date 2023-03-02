#include <stdio.h>

/* a function that calculates factorial of a number */
int Factorial(int input);

void main(void)
{
	/* variable declaration */
	int fn, sn;

	/* read user input */
	printf("Enter first number: ");
	scanf("%d", &fn);

	printf("Enter second number: ");
	scanf("%d", &sn);

	/* print result */
	printf("Factorial of %d is %d\n", fn, Factorial(fn)); /* function call */
	printf("Factorial of %d is %d\n", sn, Factorial(sn));
}

/**
 * Factorial(int input) - prints factorial of a number
 * @input - user input
 * Return - factorial of a number
 */

int Factorial(int input) /* function declaration */
{
	int fact = 1, i; /* variable declaration */
	for (i = 1; i <= input; i++) /* function logic */
		fact = fact * i;
	return fact; /* return value of function */
}
