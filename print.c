#include <stdio.h>
#include "files.h"

/* Travels through either list that is entered and prints the values. Also checks which mode is in use to include appropriate extra printed UI */

int print(struct node *sent, int mode) {
	sent=sent->next;					//Sets the first node to be the node following the sentinal, sentinal is not included in the print

	//Empty list check
	if (sent == NULL) {					//Checks to see if it was passed an empty list.
		if (mode == QUEUE)
			printf("QUEUE is empty\n");	//Queue is empty
		else 
			printf("STACK is empty\n");	//Stack is empty
		return(0);						//Done
	}
	
	//List print
	if (mode == QUEUE)
		printf("HEAD--> ");		//Print lead for printing the queue
	else
		printf("TOP --> ");		//Print lead for printing the stack

	while (sent != NULL) {		//Loops through every node until NULL is reached
		printf("%i ",sent->data);
		sent=sent->next;
	}
	
	//Print tail behind numbers
	if (mode == QUEUE)
		printf("<--TAIL");
	printf("\n");
	
	return(1);					//Done
}
