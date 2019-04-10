#include<iostream.h>
#include<conio.h>
class a
{
      protected:
      int a1;
      };
      class b: private a
      {
            public:
                   void read()
                   {
                        cin>>a1;
                        cout<<a1;
                        }
                        };
                        main()
                        {
                              b b1;
                              b1.read();
                              getch();
                              }
