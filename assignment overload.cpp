#include<iostream>
#include<conio.h>
using namespace std;
class over
{
      int a;
      public:
             over()
             {
                   }
                   over (int n)
                   {
                        a=n;
                        }
                   void operator=(over o4)
                   {
                        a=o4.a;
                       
                    }
                    void display()
                    {
                         cout<<a;
                         }
                         };
                         main()
                         {
                               over o1(78),o2;
                               o2=o1;
                               o2.display();
                               o1.display();
                               
                               getch();
                               }
