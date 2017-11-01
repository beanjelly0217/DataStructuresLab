#include <cstring>
#include <iostream>

using namespace std;

int main()
{
    char str1[50] = "Learning C++ is fun";
    char src[50] = " and easy";

    strcat(str1, src);

    cout << str1 ;

    return 0;

}
