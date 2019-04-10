#include<iostream.h>
#include<conio.h>
struct student
{     private:
      int r_no;
      void read1()
      {           
           cin>>r_no;
      }
      public:
      void display()
      {
      read1();
      cout<<r_no;
      }
      };
    main()
      {
       struct student s1;
       s1.read1();
      
       s1.display();                     
        getch();
        }
                       
