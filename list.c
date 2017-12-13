#include <stdio.h>
#include <stdlib.h>

struct node {
	int val;
	struct node *next;
};

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
		new->next = head;
		head = new;
		printf("added %d to the list\n", head->val);
	}
	printf("List created\n");

	// Traverse the list and print values
	tmp = head;
	while(tmp){
		printf("%d\t", tmp->val);
		tmp = tmp->next;
	}
	printf("\n");

	// Clear the list
	i = 0;
	while(head->next){
		tmp = head->next;
		free(head);
		head = tmp;
		++i;
	}
	free(head);
	tmp = NULL;
	head = NULL;
	printf("Freed %d nodes\n", i+1);

	return 0;
}
