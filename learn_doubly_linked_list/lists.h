#ifndef HEADER_FILE
#define HEADER_FILE

typedef struct node
{
	struct node *prev;
	int data;
	struct node *next;
} node_t;

#include <stdio.h>
#include <stdlib.h>

void count_nodes(node_t *head);
void print_node_data(node_t *head);

#endif
