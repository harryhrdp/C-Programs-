#include<iostream.h>
#include<conio.h>
#define pie 3.14
class over
{
     public:
          void area(float r)
             {
                  cout<<pie*r*r<<endl;
                  }
          void area(int l,int w)
                  {
                       cout<<l*w<<endl;
                       }
          void area(int s)
                  {
                       cout<<s*s;
                  }
                  };
                            main()
                            {
                                  float r1;
                                  cin>>r1;
                                  over o1;
                                  o1.area(r1);
                                  o1.area(5,4);
                                  o1.area(4);
                                  getch();
                                  }
