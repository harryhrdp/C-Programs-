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
                                          base *obj,obj1;//type of pointer
                                         // obj=&obj1;//base address in base pointer
                                          
                                          obj->read();
                                          derived obj3;
                                          //pointer to derived
                                          //obj=&obj3;//derived address in base
                                          obj->read();
                                          getch();
                                          }
