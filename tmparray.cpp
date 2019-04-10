#include<iostream.h>
#include<conio.h>
template<class t>
void sum(t a[],int n)
{
     t temp=0;
     for (int i=0;i<n;i++)
     {
         temp=temp+a[i];
         }
         cout<<temp;
         }
         main()
         {
               int a[10],n;
               float b[10];
               cin>>n;
               for(int i=0;i<n;i++)
                       cin>>a[i];
                       sum(a,n);
                       for (int i=0;i<n;i++)
                       {
                           cin>>b[i];
                           }
                           sum(b,n);
                           getch();
                           }
