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
                  class b : public a
                  {
                        int b1;
                        public:
                               void read()
                               {
                                    
                                    cout<<"enter b";
                                    cin>>b1;
                                    a::read();
                                    }
                                    void sum()
                                    {
                                         cout<<a1+b1;
                                         }
                                         };
                                         main()
                                         {
                                               b obj;
                                              // obj.a::read();
                                               obj.read();
                                               obj.sum();
                                               getch();
                                               }
                                               
      
