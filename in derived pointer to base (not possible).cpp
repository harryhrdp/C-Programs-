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
                                          obj->read();
                                          base obj3; //base class object
        //base class address cannot be store to derived class pointer
                             obj=&obj3;//error 
                                          obj->read();
                                          getch();
                                          }
