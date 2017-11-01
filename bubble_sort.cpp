#include <iostream>
using namespace std;
int main()
{
    int item[100],i,n,step,temp;
    cout<<"Enter the number of elements to be sorted: ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<i+1<<". Enter element: ";
        cin>>item[i];
    }

    for(step=0;step<n;step++)
    for(i=0;i<n-step;i++)
    {
        if(item[i]>item[i+1])
        {
            temp=item[i];
            item[i]=item[i+1];
            item[i+1]=temp;
        }
    }
    cout<<"In ascending order: ";
    for(i=0;i<n;++i)
         cout<<item[i]<<"\t";
    return 0;
}
