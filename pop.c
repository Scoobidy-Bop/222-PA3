#include <stdio.h>
#include <stdlib.h>
#include "files.h"

/* Removes from either the top of the stack, or head of the queue depending on mode. */

int pop(struct node *sent, int mode) {
	struct node *temp;		//A temporary node pointer to use while data is moved aroud to make popping easier
	
	if (sent->next == NULL) {		//Checks that the list passed is not a n empty list
		if (mode == QUEUE)			//Confirms which mode the program is running in.
			printf("QUEUE is empty\n");
		else
			printf("STACK is empty\n");
		return(0);
	}
	
	temp=sent->next;				//Temp is set as the node immidiately following the sentinal node.
	sent->next=temp->next;			//Sentinal's next is set to the second node
	printf("%i\n",temp->data);
	free(temp);						//First node in list is removed
	return(1);
}
