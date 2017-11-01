#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
 cout << "Enter string:";
 string str;
 getline(cin, str);
 string ostr = str;
 reverse(str.begin(), str.end());
 if(str==ostr)
 cout<<"String is palindrome";
 else
 cout<<"String is not palindrome";
}
