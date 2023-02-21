#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x;

	printf("Enter any character: ");
	scanf("%c", &x);

	printf("The ASCII value of %c is: %d", x, x);
	return (0);
}
