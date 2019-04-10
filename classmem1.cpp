#include<iostream.h>
#include<conio.h>
class emp
{
      
      char emp_name[10];
      int emp_id;
      float salary;
      int yoj;
      void read()
      {
           cin>>emp_name>>emp_id>>salary>>yoj;
           }
           
           public:
           void display();
           void update()
                  {
                       if(yoj<2011)
                       salary=salary+5000;
                       
                       }
                      // void display();
                       };
                       void emp::display()
                       {    read();
                            update();
                            cout<<emp_name<<emp_id<<endl<<yoj<<endl<<salary;
                            }
                            main()
                            {
                                 class emp e1;
                              //e1.read();//error
                                  //e1.update();
                                 e1.display();
                                  getch();
                                  }
