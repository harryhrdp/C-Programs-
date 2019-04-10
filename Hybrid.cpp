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
class b :virtual public a
{
   protected:
   int b1;
   public:
             void read1()
             {
             cout<<"enter b";
             cin>>b1;
             }
             };
class c: public virtual a
{
   protected:
   int c1;
   public:
              void read2()
              {
              cin>>c1;
              }
              };
class d: public b, public c
{
   public:
              void sum()
              {
              cout<<a1+b1+c1;
              }
              };
                   main()
                   {
                   d obj;
                   obj.read();
                   obj.read1();
                   obj.read2();
                   obj.sum();
                   getch();
                   }
