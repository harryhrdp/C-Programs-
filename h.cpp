#include<iostream.h>
#include<conio.h>
class b
{
      public:
      b()
      {
            cout<<"base class constructor";
            }
            ~b()
            {
                cout<<"base destructor";
                getch();
                }
                  };
                  class d: public b
                  {
                        public:
                               d()
                               {
                                cout<<"derived class constructor";
                               }
                               ~d()
                                 {
                                cout<<"derived destructor";
                                getch();
                                }
                              
                                    };
                                    main()
                                    {
                                         d obj;
                                         
                                          getch();                        
                                          }
