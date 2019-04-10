#include<iostream.h>
#include<conio.h>
class unary
{
      int a;
      
      public:
             unary()
             {
                 cin>>a;
               }
                   void operator ++()
                    {
                       a=a+5;
                       cout<<a;
                          }
                          };
                          main()
                           {
                           unary u1;
                           ++u1; 
                           getch();
                            }
