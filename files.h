//Structure for both Stack and Queue
struct node{
	int data;				//Number that is getting stored in each node
	struct node *next;		//Pointer that tells the list where to go next
};

//PREDEFINED VALUES

#define QUEUE 1
				//Used for indicating which mode the program is currently in.
#define STACK 0
//FUNCTION PROTOTYPES

struct node *init();						//Initializes the linked lists.

void usage();								//A print statement for printing legal commands.

int print(struct node *, int);				//Travels through either list and prints the values. Also checks which mode is in use to include appropriate extra printed UI.

int pop(struct node *, int);				//Removes from either the top of the stack, or head of the queue depending on mode.


void stack_insert(struct node *, int);		//Inserts a number onto the top of the stack.

void queue_insert(struct node *, int);		//Inserts a number to the tail of the queue.


void clean(struct node *);					//Cleans out all nodes and memory used before quitting the program.
