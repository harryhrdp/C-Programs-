#include<iostream>
#include<conio.h>
using namespace std; 
int main() 
{ 
int ar[10],n,num,no,i; 
cout<<"Enter the number of elements of an array: ";
cin>>n; 
cout<<"Enter array element: "<<endl; 
for(i=0;i<n;i++) 
{ 
cout<<"Enter element "<<i<<": "; 
cin>>ar[i]; 
}
cout<<"Elements of array: "<<endl;
for(i=0;i<n;i++)
cout<<"Element at index number "<<i<<" is: "<<ar[i]<<endl;
cout<<"Enter number to search: ";
cin>>num;
for(i=0;i<n;i++)
{
if(num==ar[i])
{
cout<<"Element found\n";
cout<<"Found at index number: "<<i;
no=0;
break;
}
else
{
no=1;
}
}
if(no==1)
cout<<"Sorry your search returned NO results. :(";
getch();
}
