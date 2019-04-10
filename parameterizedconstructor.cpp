#include<iostream>
#include<conio.h>
using namespace std;
class student
{      
      int r_no;
        int age;
           public:
                  student(int r,int a)//:r_no(r),age(a)
                  {
                  r_no=r;
                  age=a;
                  cout<<"values transferred";
                     }
                           void disp()
                           {
                                cout<<r_no<<age;
                           }
                               ~ student()
                                {
                                  cout<<"destructor invoked";
                                   getch();
                                }
           };
             main()
           {
             student s1(5,10);
             s1.disp();
             getch();
               }          
                       
