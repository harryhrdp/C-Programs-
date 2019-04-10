#include<iostream>
#include<conio.h>
using namespace std;

class student
{
      int r_no;
      int age; 
     
      public:
      void getdata(int , int );
      void display()
      {
           cout<<r_no;
           cout<<age;
      }
};
      
      inline void student::getdata(int r, int a)  //making outside function inline
      {
             r_no=r;
             age=a;
      } 
main()
      {
            class student s1;
            s1.getdata(1,20); 
            s1.display();
            getch();
       }          
                       
