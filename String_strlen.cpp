#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    int len=0;
    char str[100];
    cout<<"Enter a String : ";
    cin>>str;
    len=strlen(str);
    cout<<"Your String Has Length of "<<len;
    return 0;

}
