#include<iostream>
using namespace std;

struct node {
  int x;
  node *next;
};

int main()
{
    node *root;      // This will be the unchanging first node
    root = new node; // Now root points to a node struct
    root->next = 0;  //  set to a null pointer
    root->x = 5;
    while ( root != NULL )
    {
        cout<< root->x;
        root = root->next;
    }
}
