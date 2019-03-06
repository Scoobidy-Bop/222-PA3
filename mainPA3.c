/*
Nathan Kirsch
DUE: 2/15/19
CSE 222 - PA3

The code creates two linked lists, one for a queue, and the other for a stack. The user can specify which mode they want to be in by typing 's' or 'q'.
Whichever mode the user specifies, if the user enters a number the number will be added in the appropriate location for the stack (on the top of it),
and the queue(at the tail). If the user enters the command 'p' the next appropriate node will be "popped" from the lists. If in stack mode, the top number
on the stack will be removed; if in queue mode, the first number in the queue will be removed. Entering 'Q' will exit the program, deleting all nodes and
freeing all memory allocated from both lists. Any other command entered will result in the usage list being printed out. 

*/

#include <stdio.h>
#include <ctype.h>
#include "files.h"

int main( ) {
	//Variable definition and initialization
	struct node *queue, *stack;			//Structures that define the stack and queue
	char usr_in[100];					//USer inout string
	int mode=STACK, num_in=-1;			//Default mode is set to STACK, num_in is defined as a number that is reasonable if there is an error
	queue=init();		
	stack=init();		//Both list sentinal nodes are created
	
	//Initial print on program startup
	usage();
	
	//Infinite loop with only escape being 'Q' command
	while (1) {
		printf("> ");
		fgets(usr_in,100,stdin);
	
	//Checks if the user entered a number
		if (1 == sscanf(usr_in, "%d", &num_in)) {
			if (mode == STACK) {		//Checks which mode the program is currently in.
				stack_insert(stack, num_in);		//Runs if in STACK
				}
			else {
				queue_insert(queue, num_in);		//Otherwise it runs QUEUE
				}
		}

	//User entered a command
		else {
			switch(usr_in[0]) {		//Main Switch Statement analyzing only the first element of the input string

				case 's':		//User is switching to STACK mode
					mode=STACK;
					printf("Now in STACK mode\n");		//Prints to let the user know their command was registered
					print(stack, mode);		//Prints all inside the STACK list
					break;

				case 'q':		//User is switching to QUEUE mode
					mode=QUEUE;
					printf("Now in QUEUE mode\n");		//Prints to let the user know their command was registered
					print(queue, mode);		//Prints all inside the QUEUE list
					break;

				case 'p':		//User wants to 'pop' the appropriate number from one list or the other
					if (mode==STACK)
						pop(stack, mode);		//Will pop the top number in the stack
					else
						pop(queue, mode);		//Will pop the first number in the queue
					break;

				case 'Q':		//User wants to exit the program
					clean(queue);		//Frees all nodes inside the queue
					clean(stack);		//Frees all nodes inside the stack
					return(0);

				case '?':		//User wants a list of cammands
					usage();
					break;

				default:		//Input was invalid
					usage();
			}
		}
	}
}
