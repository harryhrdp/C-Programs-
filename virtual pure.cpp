#include<iostream.h>
#include<conio.h>
class shape
{
      public:
         virtual  void area()=0;
       };
                  class rectangle: public shape
                  {
                        int l,w;
                        public:
                              void area()
                               {
                                   cin>>l>>w;
                                    cout<<l*w;
                                    }
                                    };
                                    class square: public shape
                                    {
                                          int s;
                                    public:
                              void area()
                               {
                                   cin>>s;
                                    cout<<s*s;
                                    }
                                    };
                                    main()
                                    {
                                         shape *obj;
                                         rectangle r;
                                         square s;
                                         obj=&r;
                                          obj->area();
                                          obj=&s;
                                          obj->area();
                                          getch();
                                          }
