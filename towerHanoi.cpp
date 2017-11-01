#include <iostream>
using namespace std;

void tower(int a,char from,char aux,char to){
    if(a==1){
       cout<<"Move disc 1 from "<<from<<" to "<<to<<"\n";
       return;
    }
    else{
       tower(a-1,from,to,aux);
       cout<<"Move disc "<<a<<" from "<<from<<" to "<<to<<"\n";
       tower(a-1,aux,from,to);
    }
}

int main(){
     int n;
     cout<<"\t\t*****Tower of Hanoi*****\n\n";
     cout<<"Enter number of discs : ";
     cin>>n;
     cout<<"\n";
     tower(n,'A','B','C');
}
