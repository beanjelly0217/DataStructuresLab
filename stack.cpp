#include <iostream>
#include <stack>
using namespace std;

int main ()
{
    stack <string> stack_data; /* Simple enough to create a stack */
    if(stack_data.empty())
    {
        cout<<"Stack is empty"<<endl;
    }
    cout<<"After Pushing data."<<endl;
    stack_data.push("Rahim");
    stack_data.push("Karim");
    stack_data.push("Sadik");
    stack_data.push("Tarik");
    cout << "There are " << stack_data.size () << " data in stack_data." << endl;
    cout << "The name on the top of the stack_data is : " << stack_data.top() << endl;
    stack_data.pop();
    cout << "After Deleting one the top name is now : " << stack_data.top() << endl;
    cout << "Size of stack now : "<<stack_data.size();
    cin.get ();//This will avoid the instruction below output
    return 0;
}
