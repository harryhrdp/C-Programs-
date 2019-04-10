#include<iostream.h>
#include<conio.h>
main()
{
      int a[5]={2,5,8,6,11};
      int i,*p;
      p=a;   //p=&a;
      for(i=0;i<5;i++)
      {
                      if(*(p+i)%2==0)
                      cout<<*(p+i);
                      }
                      getch();
                      }
