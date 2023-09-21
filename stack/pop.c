#include "main.h"

/**
 * push - adds elements to top of stack
 *
 * Return: void
 */
void pop(void)
{
	int top, elem;
	int stack[LIMIT];

	if (top == -1)
	{
		printf("Stack Underflow\n");
		exit(1);
	}

	elem = stack[top];
	top--;
}
