#include<iostream.h>
#include<conio.h>
class base
{
      public:
             void read()
             {
                  cout<<"base class function";
                  }
                  };
                  class derived: public base
                  {
                        public:
                               void read()
                               {
                                    cout<<"derived class function";
                                    }
                                    };
                                    main()
                                    {
                                          derived *obj,obj1;
                                          obj=&obj1;
                                          base obj3;
                                          obj->read();
                                          obj=&obj3;//pointer to base
                                          obj->read();
                                          getch();
                                          }
