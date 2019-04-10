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
                     obj=&obj1;//base address in base pointer
                                          
                      obj->read();
                      
                      (*obj).base::read();
                        getch();
                      }
