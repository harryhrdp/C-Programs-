#include<iostream.h>
#include<conio.h>
using namespace std;
class student
      {
        int r_no;     //data member
        char name[20];
      
        void read()   //member function
          {
           cout<<"Enter Rollno: ";
           cin>>r_no;
           cout<<"Enter Name: ";
           cin>>name;
          }
        public:
        void display()//member function
          {
           read();
           cout<<"\nRollno: ";
           cout<<r_no<<endl;
           cout<<"Name: ";
           cout<<name;
          }
      };
             main()
                  {
                   class student s1;
                   //s1.read();
                   s1.display();   
                   getch();
                   }
