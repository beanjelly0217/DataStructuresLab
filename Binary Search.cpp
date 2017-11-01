#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n, i, arr[50], pos, first, last, middle;
	cout<<"Enter number of elements :";
	cin>>n;
	cout<<"Enter "<<n<<" number :";
	for (i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter a number to find :";
	cin>>pos;
	first = 0;
	last = n-1;
	middle = (first+last)/2;
	while (first <= last)
	{
		if(arr[middle] < pos)
		{
			first = middle + 1;

		}
		else if(arr[middle] == pos)
		{
			cout<<pos<<" found at location "<<middle+1<<"\n";
			break;
		}
		else
		{
			 last = middle - 1;
		}
		middle = (first + last)/2;
	}
	if(first > last)
	{
		cout<<"Not found! "<<pos<<" is not present in the list.";
	}
	return 0;
}
