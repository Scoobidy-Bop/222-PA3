#include <stdio.h>
#include <stdlib.h>
#include "files.h"

/* This function creates the sentinal nodes that the stack and queue will build from. */

struct node *init() {
		struct node *ptr;					//Initializes the pointer for the sentinal node
        ptr=malloc(sizeof(struct node));	//Allocates space in the memory for the sentinal node of size struct node.
        ptr->next=NULL;                     //Signifies that since this is the first node in the linked list, it is also the last in the list.

        return(ptr);                        //returns the pointer to the sentinal node.
}
