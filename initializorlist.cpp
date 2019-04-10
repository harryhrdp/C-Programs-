#include<iostream>
#include<conio.h>
using namespace std;
class student
{      
      int n;
      int x;
           public:
                  student(int n1, int x1): n(10),x(x1)//initializor list
                   {
                   }                           
                           void display()
                           {
                                cout<<n<<endl;
                                cout<<x;
                           }
                           
                               ~ student()
                                {
                                          cout<<"destructor invoked";
                                          getch();
                                          }
             };
  main()
           {
             student s1(5,5);
             s1.display();
             getch();
           }          
                       
