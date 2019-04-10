#include<iostream.h>
#include<conio.h>
class class1
{
      int v;
      public:
             void in()
             {
                  cin>>v;
                  }
                  void display()
                  {
                       cout<<v;
                       }
                        void change();
      };
                       void class1::change( )
                       {
                            v= v+5;
                            }
                            main()
                            {
                                  class1 obj;
                                  obj.in();
                                  obj.display();
                                  obj.change();
                                  obj.display();
                                  getch();
                                  }
                                  
