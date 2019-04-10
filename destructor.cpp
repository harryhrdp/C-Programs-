#include<iostream.h>
#include<conio.h>
class a
{
      int a1,b;
      public:
             a()
             {
                 cin>>a1>>b;
                 }
                 ~a()
                 {
                     cout<<"destructor invoked";
                    
                     }};
                     main()
                     {
                           a a2;
                           getch();
                           }
