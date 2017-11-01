#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stack>
using namespace std;
char pop(){
 char a;
 a=stack[top];
 top--;
  return a;
}
int main()
{
    stack <int> data;
    int arr[10];
    data.push(2);
    data.push(3);
    cout<<data.top();
    arr[0]=pop();
    cout<<arr[0];
    return 0;
}
