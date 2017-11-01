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
		return -1; // Something I didn't expect at all went wrong
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

//Add new item at begning of the list.
void addAtHead(List * lp,int item)
{
	Node * node;
	node = createNode(item);

	//if list is empty.
	if(lp->head == NULL)
	{
		lp->head = node;
		lp->tail = node;
	}
	else
	{
		node->next 	= lp->head	;
		lp->head 	= node		;
	}
}

//Delete item from Start of list.
int delFromHead(List * lp)
{
	int item = 0;

	if(lp->head == NULL)
	{
		cout<<"\nList is Empty ...";
		return -1;// Something I didn't expect at all went wrong
	}
	else
	{
		item = lp->head->item;//Item is to return after function execution.
		lp->head = lp->head->next;
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
	cout<<endl<<"After Adding item at Tail list be: ";
	printList(lp);
	addAtTail(lp,20);
	cout<<endl<<"After Adding item at Tail list be: ";
	printList(lp);
	addAtHead(lp,30);
	cout<<endl<<"After Adding item at Head list be: ";
	printList(lp);
	addAtHead(lp,40);
	cout<<endl<<"After Adding item at Head list be: ";
	printList(lp);

	item = delFromTail(lp);

	if(item >= 0)
		cout<<endl<<"After Deleting item from Tail The list be : ";
	printList(lp);

		item = delFromHead(lp);

	if(item >= 0)
		cout<<endl<<"After Deleting item from Head The list be : ";
	printList(lp);

	return 0;
}
