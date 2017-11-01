#include <iostream>
using namespace std;

void merge(int *,int, int , int );
void mergesort(int *a, int low, int high)
{
    int mid;
    if (low < high)
    {
        mid=(low+high)/2;
        mergesort(a,low,mid); //first half
        mergesort(a,mid+1,high); //second half
        merge(a,low,high,mid);
    }
    return;
}
// Merge sort concepts starts here
void merge(int *a, int low, int high, int mid)
{
    int i, j, k, c[50];
    i = low;
    k = low;
    j = mid + 1;
    while (i <= mid && j <= high)
    {
        if (a[i] < a[j])
        {
            c[k] = a[i]; //placing items of first half in new array
            k++;
            i++;
        }
        else
        {
            c[k] = a[j]; ////placing items of 2nd half in new array
            k++;
            j++;
        }
    }
    while (i <= mid)  //copy remaining items of the first list
    {
        c[k] = a[i];
        k++;
        i++;
    }
    while (j <= high) //copy remaining items of the second list
    {
        c[k] = a[j];
        k++;
        j++;
    }
    for (i = low; i < k; i++) //Transfer items from auxiliary array to a[]
    {
        a[i] = c[i];
    }
}

int main()
{
    int a[30], i, b[30],n;
    cout<<"Enter  the number of elements to be sorted :";
    cin>>n;
    for (i = 0; i <n; i++)
    {
        cin>>a[i];
    }
    mergesort(a, 0, 4);
    cout<<"Sorted array : ";
    for (i = 0; i < 5; i++)
    {
        cout<<a[i]<<"\t";
    }
}
