#include <iostream>
using namespace std;

const int DATA_SIZE = 12;

// A simple print function
void print(int *data)
{
    for ( int i = 0; i < DATA_SIZE; i++ )
        cout << data[i] << " ";
    cout << endl;
}

// The partition function
int partition(int* data, int low, int high)
{
    int pivot = data[high];

    while ( low < high )
    {
        while ( data[low] < pivot )
            low++;

        while ( data[high] > pivot )
            high--;

        if ( data[low] == data[high] )
            low++;
        else if ( low < high )
        {
            int tmp = data[low];
            data[low] = data[high];
            data[high] = tmp;
        }
        for ( int i = 0; i < DATA_SIZE; i++ )
        cout << data[i] << " ";
    cout << endl;
    }
    return high;

}

// The quicksort recursive function
void quicksort(int* data, int low, int high)
{
    if ( low < high )
    {
        int j = partition(data, low, high);
        quicksort(data, low, j-1);
        quicksort(data, j+1, high);
    }
}

int main()
{
    int data[DATA_SIZE] = {44,33,11,55,77,90,40,60,99,22,88,66};//35, 33, 42, 10, 14, 19, 27, 44, 26, 31
    cout << "Data Before Sorting : ";
    print(data);
    quicksort(data, 0, 9);
    cout << "Data After sorting  : ";
    print(data);
    return 0;
}
