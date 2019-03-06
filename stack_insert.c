#include <stdio.h>
#include <stdlib.h>
#include "files.h"

/* Inserts a number onto the top of the stack */

void stack_insert(struct node *stack, int num) {

	struct node *newnode;

	newnode=malloc(sizeof(struct node));	//Memory allocated for the new node

	newnode->next=stack->next;	//Newnode points to the first node (soon to be second).
	stack->next=newnode;		//Newnode is now the first node.
	newnode->data=num;			//Data is put into node.
}
