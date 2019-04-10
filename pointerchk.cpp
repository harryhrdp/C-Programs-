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
                  void display(class1 *x)
                    {
                       cout<<(*x).v;
                    }
                    };
                            main()
                            {
                                  class1 obj;
                                  obj.in();
                                  cout<<endl;
                                  obj.display(&obj);
                                  cout<<endl;
                                  getch();
                                  }
                                  
