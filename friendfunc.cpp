#include<iostream.h>
#include<conio.h>
class student
{
      int a;
      public:
             void in()
             {
                  cin>>a;
                  }
      friend void out(student);
                };
                  void out(student s)
                  {
                       cout<<s.a;
                       }
                       main()
                       {
                             student s1;
                             s1.in();
                             out(s1);
                             getch();
                             }
