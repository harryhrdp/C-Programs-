#include<iostream.h>
#include<conio.h>
class student
{
      static int count;
      int code;
      public:
             void set()
             {
                  code=++count;
                  }
                  void show()
                  {
                       cout<<"object number ";
                       cout<<code<<endl;
                       }
                       static void showcount()
                       {
                              cout<<"count: "<<count<<endl;
                              //cout<<code;// error
                       }
                       };
                       int student ::count; //definition
                       main()
                       {
                             student s1,s2;
                             s1.set();
                             s2.set();
                             s1.showcount();
                             s2.showcount();
                             student::showcount();
                             s1.show();
                             s2.show();
                             getch();
                             }
                             
