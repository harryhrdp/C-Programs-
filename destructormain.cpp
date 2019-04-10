#include<iostream.h>
#include<conio.h>
class alpha
{
      static int count;
      public:
             alpha()
             {
             count++;
             cout<<"\n No of object created "<<count;
             }
             
             ~alpha()
             {
              cout<<"\n No of object destroyed "<<count;
              count--;
              getch();
              }
            };
              int alpha ::count;
      
      int main()
      {
            cout<<"\nenter main\n";
                  alpha a1,a2,a3,a4;
                 {
                  cout<<"\n enter block 1\n";
                  alpha a5;
                 }
                  {
                  cout<<"\n enter block 2\n";
                  alpha a6;
                  }
                  cout<<"\n Re-enter main\n";
                   getch();
                   }
