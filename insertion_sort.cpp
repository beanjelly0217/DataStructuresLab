#include<iostream>
using namespace std;

int main()
{
    int n, data[100], i, d, temp;

    cout<<"Enter number of elements\n";
    cin>>n;

    cout<<"Enter "<<n<<" integers : ";
    for (i = 0; i < n; i++) {
    	cin>>data[i];
    }

    for (i = 1 ; i <= n - 1; i++) {
        d = i;
        while ( d > 0 && data[d] < data[d-1]) {
            temp          = data[d];
            data[d]   = data[d-1];
            data[d-1] = temp;
            d--;
        }
    }

    cout<<"Sorted list in ascending order:\n";
    for (i = 0; i < n; i++) {
   	 cout<<data[i]<<"   ";
    }

    return 0;
}
