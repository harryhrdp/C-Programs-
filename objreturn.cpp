#include<iostream.h>
#include<conio.h>
class complex
{
      float x;
      float y;
      public:
             void input(float real, float imag)
             {
                 x=real;
                 y=imag;
             }
                  friend complex sum(complex, complex);
                  void show()
                  {
                       cout<<x<<" "<<y<<"\n";
                  }
                   };
                  void sum(complex c1, complex c2)
                  {
                          complex c3;
                          c3.x=c1.x+c2.x;
                          c3.y=c1.y+c2.y;
                      //    return (c3);
                  }
                  int main()
                  {
                      complex a,b,c;
                      a.input(3.1,5.6);
                      b.input(2.75,1.3);
                      sum(a,b);
                      cout<<"a "; a.show();
                      cout<<"b "; b.show();
                      cout<<"c "; c.show();
                      getch();
                  }
