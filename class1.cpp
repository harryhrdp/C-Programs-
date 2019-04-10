#include<iostream>
#include<conio.h>
using namespace std;
class student
{
      int r_no;//data member
      char name[20];
      
      public:
      void read()//member function
      {
           cin>>r_no>>name;
      }
      void display()//member func
      {
           cout<<r_no<<name;
      }
};
                        main()
                       {
                          class student s[10];
                          int i;
                          for(i=0;i<10;i++)
                          {
                           s[i].read();
                           s[i].display();   
                           }
                           getch();
                            }
                       
