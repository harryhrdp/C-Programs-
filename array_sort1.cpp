#include<iostream>
#include<conio.h>
using namespace std;
int main()

  {
   int temp, i, j, n;
   int a[10];
   cout<<"enter the number of elements";
   cin>>n;
   cout<<"enter elements of array:\n";
   for(i=0; i<n; i++)
{
     cin>>a[i];
}
 
     for(j=0;j<n;j++)
     {
     for(i=0;i<n;i++)
       {
       if(a[i]>a[i+1])
       {
       temp=a[i];
       a[i]=a[i+1];
       a[i+1]=temp;
       }
       }
       }
   for(i=0;i<=n-1;i++)
     cout<<a[i];
  getch();
  }
