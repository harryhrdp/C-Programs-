#include<iostream>
#include<conio.h>
using namespace std;
class student
{      
      int r_no;
      char name[20];
           public:
                  student()
                  {
                          cin>>r_no>>name;
                          disp();
                   }
                  void disp()
                       {
                          cout<<r_no<<name;
                       }
                   ~student()
                       {
                          cout<<"destructor invoked";
                          getch();
                       }
             };
  main()
           {
             class student s1;
             getch();
           }          
