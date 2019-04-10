#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int arr[100],n,i,sum=0;

	cout<<"Enter number of elements you want to insert ";
	cin>>n;

	for(i=0;i<n;i++)
	{

		cout<<"Enter element "<<i+1<<":";
		cin>>arr[i];
	}

	for(i=0;i<n;i++)
		sum=sum+arr[i];

	cout<<"\nThe sum of Array is :"<<sum;
	cout<<"\nValue in i is :"<<i;
	cout<<"\nThe average of Array is :"<<sum/i;

	getch();
}

