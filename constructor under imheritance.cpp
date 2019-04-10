#include<iostream.h>
#include<conio.h>
class b
{      public:
      b()
      {
            cout<<"base class constructor";
            }
            
                  };
                  class d: public b
                  {
                        public:
                               d()
                               {
                                        cout<<"derived class constructor";
                                        }
                              
                                    };
                                    main()
                                    {
                                         d obj;
                                         //obj.read();
                                        // obj.read();
                                          getch();                         getch();
                                          }
