#include<iostream.h>
#include<conio.h>
class base
{
      protected:
      int a;
      public: 
       void inp()
       {
            cin>>a;
            }
            };
            class derived: protected base
            {
                  public:
                         void data()
                         {
                              inp();
                              cout<<a;
                              } };
                              main()
                              {
                                    derived d1;
                                    d1.data();
                                    //d1.inp();
                                    getch();
                                    }
