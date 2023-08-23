#include "main.h"

void display(void)
{
	int stack[LIMIT], top, i;
	if (top == -1)
	{
		printf("Stack Underflow\n");
	}
	else if (top > 0)
	{
		printf("The elements of the stack are: \n");
		for (i = top; i >= 0; i--)
		{
			printf("%d\n", stack[i]);
		}
	}
}
