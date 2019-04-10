#include<iostream.h>
#include<conio.h>
class a
{
      protected:
      int a1;
      public:
             void read()
             {
                  cout<<"enter a";
                  cin>>a1;
                  }
                  };
                  class b 
                  {
                        protected:
                        int b1;
                        public:
                               void read1()
                               {                                                                        cout<<"enter b";
                                    cin>>b1;
                                    }
                                         };
                                    class c: public a, public b
                                         {
                                               public:
                                               void sum()
                                               {
                                                    cout<<a1+b1;
                                                    }
                                                    };
                                         main()
                                         {
                                               c obj;
                                               obj.read();
                                               obj.read1();
                                               obj.sum();
                                               getch();
                                               }
                                               
      
