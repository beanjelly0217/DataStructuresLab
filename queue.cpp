#include <iostream>
#include <queue>
using namespace std;

int main ()
{
    queue <string> names; /* Declare a queue */
    if(names.empty()){
        cout<<"The queue is empty and ready to PUSH data"<<endl;
    }
    names.push ("Arif"); /* Add some values to the queue */
    names.push ("Azam");
    names.push ("Alif");
    cout << "There are currently " << names.size () << " people in the queue" << endl
         << "The person at the front of the queue is " << names.front () << endl
         << "The person at the back of the queue is " << names.back () << endl << endl;
    cout << names.front () << " has been deleted!" << endl;
    names.pop ();
    cout << "There are currently " << names.size () << " people in the queue" << endl
         << "The person at the front of the queue is " << names.front () << endl
         << names.back () << " is still at the back!" << endl;
    cin.get ();
    return 0;
}
