#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

//Self referential structure to create node.
typedef struct tmp
{
	int 	item;
	struct tmp *  next;
}Node;


//structure for create linked list.
typedef struct
{
	Node * head;
	Node * tail;

}List;

//Initialize List
void initList(List * lp)
{
	lp->head = NULL;
	lp->tail = NULL;
}

//Create node and return reference of it.
Node * createNode(int item)
{
	Node * nNode;

	nNode = (Node *) malloc(sizeof(Node));

	nNode->item = item;
	nNode->next = NULL;

	return nNode;
}


//Add new item at the end of list.
void addAtTail(List * lp,int item)
{
	Node * node;
	node = createNode(item);
    //placing the node in list
	//if list is empty.
	if(lp->head == NULL)
	{
		lp->head = node;
		lp->tail = node;
	}
	else
	{
		lp->tail->next  = node;
		lp->tail 	= lp->tail->next;
	}
}

//Delete item from the end of list.
int delFromTail(List * lp)
{
	Node * temp;
	int i = 0;
	int item = 0;

	if(lp->tail == NULL)
	{
		cout<<"\nList is Empty ...";
		return 0;
	}
	else
	{
		temp = lp->head;

		while(temp->next != lp->tail)
		{ temp = temp->next;}//traversing all items in list

		item = lp->tail->item; //item is the last value
		lp->tail = temp;//temp is previous value of item
		lp->tail->next = NULL;
	}

	return item;
}

//To print list
void printList(List *lp)
{
	Node * node;

	if(lp->head == NULL)
	{
		cout<<"\tEmpty List\n";
		return;
	}

	node = lp->head;

	cout<<"\t";
	while(node != NULL)
	{
		cout<<node->item;
		node = node->next;

		if(node !=NULL)
			cout<<"-->";
	}
	cout<<"\n\n";
}
int main()
{
	List *lp;
	int item = 0;
	lp = (List *) malloc(sizeof(List));
	initList(lp);
	cout<<"The list be: ";
	printList(lp);

	addAtTail(lp,10);
	cout<<endl<<"After Adding 1st item The list be: ";
	printList(lp);
	addAtTail(lp,20);
	cout<<endl<<"After Adding 2nd item The list be: ";
	printList(lp);

	item = delFromTail(lp);

	if(item >= 0)
		cout<<endl<<"After Deleting item from Tail The list be : ";
	printList(lp);

	return 0;
}
