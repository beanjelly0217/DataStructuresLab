#include<iostream>
#include<stdio.h>
using namespace std;

struct Node {
	char data;
	struct Node *left;
	struct Node *right;
};

void Preorder(struct Node *root) {
	if(root == NULL) return; // exit while no data in tree

	cout<<root->data<<"\t"; // Print data
	Preorder(root->left);     // Visit left subtree
	Preorder(root->right);    // Visit right subtree
}

//Function to visit nodes in Inorder
void Inorder(Node *root) {
	if(root == NULL) return;

	Inorder(root->left);       //Visit left subtree
	cout<<root->data<<"\t";  //Print data
	Inorder(root->right);      // Visit right subtree
}

//Function to visit nodes in Postorder
void Postorder(Node *root) {
	if(root == NULL) return;

	Postorder(root->left);    // Visit left subtree
	Postorder(root->right);   // Visit right subtree
	cout<<root->data<<"\t"; // Print data
}

// Function to Insert Node in a Binary Search Tree
Node* Insert(Node *root,char data) {
	if(root == NULL) {
		root = new Node();
		root->data = data;
		root->left = root->right = NULL;
	}
	else if(data <= root->data)// check if the data is smaller than root-> and place to left node
		root->left = Insert(root->left,data);
	else // check if the data is greater than root-> and place to left node
		root->right = Insert(root->right,data);
	return root;
}

int main() {
	Node* root = NULL;
	root = Insert(root,'M'); root = Insert(root,'B');
	root = Insert(root,'Q'); root = Insert(root,'Z');
	root = Insert(root,'A'); root = Insert(root,'C');
	cout<<"Preorder : ";
	Preorder(root);
	cout<<"\nInorder  : ";
	Inorder(root);
	cout<<"\nPostorder: ";
	Postorder(root);
	cout<<"\n";
}
