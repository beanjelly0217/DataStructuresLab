#include <cstring>
#include <iostream>

using namespace std;

int main()
{
    char str[100];
    char ch;
    cout<<"Enter an Array of Character: ";
    cin>>str;
    cout<<"I am looking for :";
    cin>>ch;


    if (strchr(str, ch))
        cout << ch << " is available in |" << str << "|"<<endl;
    else
        cout << ch << " is not available in |" << str << "|"<<endl;

    return 0;
}
