#ifndef HEADER_FILE
#define HEADER_FILE

typedef struct node
{
	int data;
	struct node *next;
} node_t;

#include <stdio.h>
#include <stdlib.h>

void count_nodes(node_t *head);
void print_node_data(node_t *head);
void add_node_at_end(int data, node_t *head);
void add_node_at_beg(int data, node_t **head);
node_t *add_node_at_beg_return(int data, node_t *head);
void add_node_at_pos(int data, int pos, node_t *head);
node_t *del_node_at_beg(node_t *head);

#endif
