#include<iostream.h>
#include<conio.h>
class abc
{
      int a;
      public:
        void in()
         {
           cin>>a;
         }
        void dis()
         {
           cout<<a;
         }
          friend class def;
         };
class def
{
        public:
        void display(abc a1)
         {
            cout<<a1.a<<endl;
            a1.a=a1.a+5;
            cout<<a1.a<<endl;
         }
         };
                         main()
                              {
                               abc obj;
                               obj.in();
                               
                               def obj1;
                               obj1.display(obj);
                               obj.dis();
                               getch();
                               }
