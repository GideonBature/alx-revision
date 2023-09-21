#ifndef _MAIN_H_
#define _MAIN_H_
typedef struct node
{
	int data;
	struct node *next;
	struct node *prev;
} node_t;

node_t *head, *new_node;

#include <stdio.h>
#include <stdlib.h>

void create(void);

#endif
