#include "lists.h"
void __attribute__((constructor)) print_before_main_func(void);
//void print_before_main_func(void) __attribute__((constructor));

/**
 * print_before_main_func - prints before the main function gets executed
 * Return: void
*/
void print_before_main_func(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}