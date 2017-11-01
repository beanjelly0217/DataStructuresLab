#include <iostream>
#include <string.h>
using namespace std;

void remove(char cstring[], char letter)
{
    char temp[100]; int i=0;
    for( i = 0; cstring[i] != '\0'; i++)
    {
        if(cstring[i] != letter)
        {
            temp[i]=cstring[i];
            cout<<temp[i];
        }
    }

}

int main()
{
char sentence[100], chtr;
cout << "Enter an array of character : ";
cin>> sentence;
cout << endl;
cout<<"Enter the Character to delete : ";
cin>>chtr;
remove(sentence, chtr);

//cout<<sentence;
}
