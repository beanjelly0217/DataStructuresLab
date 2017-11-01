#include <cstring>
#include <iostream>

using namespace std;

int main()
{
    char src[] = "Hello Everyone.";
    char str1[20];

    strcpy(str1,src);
    cout << str1;
    return 0;
}
