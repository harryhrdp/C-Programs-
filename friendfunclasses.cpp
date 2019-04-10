#include<iostream.h>
#include<conio.h>
class abc;
class xyz
{
      int data;
      public:
             void setvalue(int value)
             {
                  data=value;
             }
             friend void add(xyz,abc);
             };
class abc
{
      int data;
      public:
             void setvalue(int value)
             {
                  data=value;
             }
             friend void add(xyz,abc);
             };
             
             void add(xyz obj1,abc obj2)
             {
                  int total=obj1.data+obj2.data;
                  cout<<"sum of data values = "<<total;
             }
             int main()
             {
                 xyz x;
                 abc a;
                 x.setvalue(5);
                 a.setvalue(50);
                 add(x,a);
                 getch();
                 }
