#include<iostream.h>
#include<conio.h>
class base
{
      public:
             virtual void read()
             {
                  cout<<"base class function"<<endl;
                  }
                  };
                  class derived: public base
                  {
                        public:
                              void read()
                               {
                                    cout<<"derived class function"<<endl;
                                    }
                                    };
                                    main()
                                    {
                                         base *obj,obj1;//type of pointer
                                         derived obj3;
                                         obj=&obj3;
                                          (*obj).read();
                                         obj=&obj1;//base address in base pointer
                                         obj->read();
                                          getch();
                                          }
