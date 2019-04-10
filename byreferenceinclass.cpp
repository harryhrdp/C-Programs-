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
                       friend void change(class1 &);
                       };
                       void change( class1 &x)
                       {
                            x.v=x.v+5;
                            cout<<x.v;
                            }
                            main()
                            {
                                  class1 obj;
                                  obj.in();
                                  cout<<endl;
                                  obj.display();
                                  cout<<endl;
                                  change(obj);
                                  //obj.in();
                                  cout<<endl;
                                  obj.display();
                                  getch();
                                  }
                                  
