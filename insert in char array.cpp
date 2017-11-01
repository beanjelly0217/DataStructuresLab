#include <iostream>
#include <string.h>
using namespace std;

void append(char* s, char c) {
        int len = strlen(s);
        s[len] = c;
        s[len+1] = '\0';
}

int main()
{
char sentence[100], chtr;
cout << "Enter an array of character : ";
cin>> sentence;
cout << endl;
cout<<"Enter the Character to add : ";
cin>>chtr;
append(sentence, chtr);

cout<<sentence;
}
