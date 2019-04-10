#include<iostream.h>
#include<conio.h>
class over
{
      int a;
      public:
                over (int n)
                   {
                        a=n;
                        }
                   over operator==(over o4)
                   {
                        return(a<o4.a);
                       
                    }
                    void display()
                    {
                         cout<<a<<endl;
                         }
                         };
                         main()
                         {
                               over o1(78),o2(8),o3;
                               o3=(o2==o1);
                               o1.display();
                               o2.display();
                               o3.display();
                               getch();
                               }
