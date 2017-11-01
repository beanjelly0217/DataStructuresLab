#include <cstring>
#include <iostream>

using namespace std;

int main()
{
    char lhs[] = "Army";
    char rhs[] = "Army";
    int result;
    result=strcmp(lhs,rhs);
    if(result > 0)
        cout << rhs << " precedes " << lhs << endl;
    else if (result < 0)
        cout << lhs << " precedes " << rhs << endl;
    else
        cout << lhs << " and " << rhs << " are same" << endl;
        return 0;
}
