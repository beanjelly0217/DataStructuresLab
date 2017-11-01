#include <iostream>
using namespace std;

void max_heap(int arr[], int n, int i)
{
   // Find largest among root, left child and right child
   int largest = i;
   int l = 2*i + 1; //left child index
   int r = 2*i + 2; //right child index

   if (l < n && arr[l] > arr[largest])
     largest = l;

   if (r < n && arr[r] > arr[largest])
     largest = r;

   // Swap and continue max_heaping if root is not largest
   if (largest != i)
   {
     swap(arr[i], arr[largest]);
     max_heap(arr, n, largest);
   }
}

// main function to do heap sort
void heapSort(int arr[], int n)
{
   // Build max heap
   for (int i = n / 2 - 1; i >= 0; i--)
    max_heap(arr, n, i);

   // Heap sort
   for (int i=n-1; i>=0; i--)
   {
     swap(arr[0], arr[i]);
     max_heap(arr, i, 0); // max_heap root element to get highest element at root again
   }
}

void printArray(int arr[], int n)
{
   for (int i=0; i<n; ++i)
     cout << arr[i] << " ";
   cout << "\n";
}

int main()
{
   int arr[] = {1,12,9,5,6,10};
   int n = sizeof(arr)/sizeof(arr[0]);
   cout << "Array Before Sorting : \n";
   printArray(arr, n);
   heapSort(arr, n);

   cout << "Array After Sorting : \n";
   printArray(arr, n);
}
