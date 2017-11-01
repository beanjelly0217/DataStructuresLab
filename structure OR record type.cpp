#include <iostream>
using namespace std;

struct Student
{
    string name;
    int id;
} std1, std2;

int main(){
    cout<<"1st Student "<<endl;

    // Input of feet for structure variable dist1
    cout<<"Enter Name: ";
    cin>>std1.name;
    cout<<"Enter Id: ";
    cin>>std1.id;
    cout<<endl<<"Name : "<<std1.name<<" || Id : "<<std1.id;

    return 0;

}
