#include <cstring>
#include <iostream>

using namespace std;

int main()
{
    char str[] = " is easy.";
    char ch = 'r';

    if (strchr(str, ch))
        cout << ch << " is available \"" << str << "\"";
    else
        cout << ch << " is not available \"" << str << "\"";

    return 0;
}
