#include "list.h" 

int addToFront(struct node *node, struct node *head);
int addToBack(struct node *node, struct node *head);
int printList(struct node *head);
int countNodes(struct node *head);
void printList(struct node *head);
int isInList(int val, struct node *head); 
int deleteNode(int val, struct node *head);
int deleteList(struct node *head);

int main(int argc, char *argv[]){
	int lengthRequested = 4;
	int i;
	struct node *head = NULL;
	struct node *tmp = NULL;

	printf("Setup complete\n");

	// Create a list
	for (i = 0; i < lengthRequested; ++i){
		struct node *new = (struct node*) malloc( sizeof(struct node));
		new->val = i;
		addToBack(new, head);
		printf("added %d to the list\n", i);
	}
	printf("List created\n");

	// Traverse the list and print values
	if(isInList(3, head))
		printf("%d is in list\n", 3);
	else
		printf("%d is not in list\n", 3);

	printf("There are %d nodes in the list\n", countNodes(head));

	deleteNode(3, head);

	// Traverse the list and print values
	if(isInList(3, head))
		printf("%d is in list\n", 3);
	else
		printf("%d is not in list\n", 3);

	printf("There are %d nodes in the list\n", countNodes(head));
	printList(head);
	deleteList(head);
	printf("There are %d nodes in the list after deletion\n", countNodes(head));

	tmp = NULL;
	head = NULL;
	printf("Freed %d nodes\n", i+1);

	return 0;
}
