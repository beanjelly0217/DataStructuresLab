#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int arr[10], i, num, n, flag=0, pos;
	cout<<"Enter the size of array : ";
	cin>>n;
	cout<<"Enter Array Elements one by one : ";
	for(i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the number to find : ";
	cin>>num;
	for(i=0; i<n; i++)
	{
		if(arr[i]==num)
		{
			flag=1;
			pos=i+1;
			break;
		}
	}
	if(flag==0)
	{
		cout<<"Number not found..!!";
	}
	else
	{
		cout<<num<<" found at position "<<pos;
	}
}
