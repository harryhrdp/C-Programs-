#include<iostream.h>       
#include<conio.h>
class student
{
      int r_no;
      float marks;
      public:
             void input()
             {
                  cin>>r_no>>marks;
                  }
                  void display()
                  {
                       cout<<this<<endl;
                       cout<<this->r_no; //cout<<(*this).r_no;
                       cout<<(*this).marks;
                   
                       }
                       };
                       main()
                       {
                             student s1,s2;
                             s1.input();
                             s1.display();
                             s2.input();
                             s2.display();
                             getch();
                             }
