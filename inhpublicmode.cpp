#include<iostream.h>
#include<conio.h>
class base
{
      public:
      int a;      
      public: 
              void inp()
       {
            cin>>a;
            }
            };
            class derived: public base
            {
                  public:
                         
                         void data()
                         {inp();
                              cout<<a;
                              }
                              };
                              main()
                              {
                                    derived d1;                                                         
                                   // d1.inp();
                                     d1.data();
                                    getch();
                                    }
