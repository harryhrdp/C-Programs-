#include<iostream.h>
#include<conio.h>
class student
{
      int a;
      public:
             void read();
             void display();
                  };
                  
                  void student::read()
                  {
                       cin>>a;
                       }
                  
                  void student :: display()
                  {
                       cout<<a;
                       }
                       main()
                       {
                             student s1;
                             s1.read();
                             s1.display();
                             getch();
                             }
