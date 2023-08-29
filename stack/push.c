#include "main.h"

/**
 * push - adds elements to top of stack
 *
 * Return: void
 */
void push(void)
{
	int top;
	int stack[LIMIT];

	if (top == LIMIT - 1)
	{
		printf("Stack Overflow\n");
		exit(1);
	}

	stack[top] = elem;
	top++;
}
