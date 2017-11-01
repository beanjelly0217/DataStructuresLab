#include<iostream>
using namespace std;

void change(int *num) {
    cout<<"Before adding value inside function num = "<< *num<<endl;
    *num=*num+100;
    cout<<"After adding value inside function num =  "<< *num<<endl;
}

int main() {
    int x=100;
    cout<<"Before function call x = "<< x<<endl;
    change(&x);
    cout<<"After function call x = "<< x<<endl;
    return 0;
}
