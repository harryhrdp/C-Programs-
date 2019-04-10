#include<iostream>
#include<conio.h>
using namespace std;

class student
{      
      int n,ans;
           public:
                  student()
                   {
                      cout<<"to check armstrong number"<<endl;
                   }                           
                  student(int n1)
                   {
                      n=n1;
                      int r;
                      ans=0;                                
                         for(n1;n1>0;n1=n1/10)
                          {
                           r=n1%10;
                           ans=ans+(r*r*r);
                          }
                        
                          }
                  student (student &s)
                    {
                        if(s.ans==s.n)
                        cout<<"\narmstrong";
                        else
                        cout<<"not";
                    }
        };
  main()
          {
             student s1;
             student s2(153);
             student s3(s2);
             getch();
          }          
                       
