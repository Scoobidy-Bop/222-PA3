#include <stdio.h>
#include <stdlib.h>
#include "files.h"

/* Inserts a number to the tail of the queue */

void queue_insert(struct node *queue, int num) {
	struct node *prev, *newnode;
	newnode=malloc(sizeof(struct node));	//Memory is allocated for the newnode in the queue

	//Loop until end of queue
	while (queue != NULL) {	
		prev=queue;			//Prev is always 1 step behind what queue is.
		queue=queue->next;
	}
	
	newnode->next=queue;	//Newnode's next pointer is equal to queue, which is NULL
	prev->next=newnode;		//Newnode is now being pointed to by the previous node. Now included inside the list.
	newnode->data=num;		//Data is put into the new node.
}

