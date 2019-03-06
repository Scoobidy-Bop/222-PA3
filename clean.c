#include <stdio.h>
#include <stdlib.h>
#include "files.h"

/* This function is called at the emd of the program as it is quitting and goes through all nodes in each linked list and frees all memory used for each */

void clean(struct node *sent) {
	struct node *prev;		//Pointer used for freeing the node behind where current is
	prev=sent;				
	sent=sent->next;		

	while (sent != NULL) {	//Loop continues until the current node is pointing to a NULL pointer, indicating end of LL
		free(prev);			//Frees the node behind curr
		prev=sent;			//Catches prev up to curr
		sent=sent->next;
	}
	
	free(prev);				//Since Curr == NULL by now, prev is the last node in use. So it has to be freed
}
