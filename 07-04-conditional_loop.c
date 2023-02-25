#include <stdio.h>

/* 07L04.c: Conditional loop */

void main(void)
{
	int c;

	printf("Enter a character:\n(enter x to exit)\n");
	for(c = '`; c != `x';)
	{
		c = getc(stdin);

		putchchar(c);
	}
	printf("/nOut of the for loop. Bye!\n");
	return 0;
}
