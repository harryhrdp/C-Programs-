#include<iostream.h>
#include<conio.h>
class base
{
       int a;
       public:
       int b;
       protected:
       void inp()
       {
            cin>>a;
            }
            };
            class derived: private base
            {
                  int c;
                  public:
                         void data()
                         {   cin>>a;
                             inp();
                             cin>>b;
                             cin>>c;
                             cout<<c;
                              }
                              };
                              main()
                              {
                                    derived d1;
                                    d1.data();
                                    //d1.b=15;
                                    //d1.inp();
                                    getch();
                                    }
