#include<iostream.h>       
#include<conio.h>
class student
{
      int r_no;
      float marks;
      public:
             void input()
             {
                  cin>>r_no>>marks;
                  }
                  void display()
                  {
                       cout<<r_no<<marks;
                       }
                       };
                       main()
                       {
                             student s1,*s2;
                             s2=&s1;
                             (*s2).input();
                             s2->display();
                             
                             getch();
                             }
