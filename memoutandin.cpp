#include<iostream.h>
#include<conio.h>
class student
{      int a;
      void display();
      public:
             void read()
             {    cin>>a;
                  display();
              }};
               void student :: display()
                  { cout<<a;
                    }
                       main()
                       {
                           student s1;
                            s1.read();
                            getch();
                             }
