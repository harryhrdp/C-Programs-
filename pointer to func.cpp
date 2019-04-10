#include<iostream.h>
#include<conio.h>
int add(int,int);
int(*p) (int,int);
main()
{
      int a,b,s;
      cin>>a>>b;
      p=&add;
      s=(*p)(a,b);
      cout<<s;
      getch();
      }
      int add( int x,int y)
      {  int z;
         z=x+y;
         return z;
          }
