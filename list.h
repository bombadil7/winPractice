#include <stdlib.h>
#include <stdio.h>

struct node{
	int val;
	struct node* next;
};

int addToFront(struct node *node, struct node *head);
int addToBack(struct node *node, struct node *head);
int printList(struct node *head);
int countNodes(struct node *head);
void printList(struct node *head);
int isInList(int val, struct node *head); 
int deleteNode(int val, struct node *head);
int deleteList(struct node *head);
