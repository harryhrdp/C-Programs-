#include<iostream.h>
#include<conio.h>
class student
{
      static int count;
      
      public:
             void get()
             {
                 count++;
                  }
                  void display()
                  {
                       cout<<"count ";
                       cout<<count<<endl;
                       }
                       };
                       int student::count; //definition
                       main()
                       {
                             student s1,s2,s3;
                             s1.display();
                             s2.display();
                             s3.display();
                             s1.get();
                             s2.get();
                             s3.get();
                             s1.display();
                             s2.display();
                             s3.display();
                             getch();
                             }
                             
