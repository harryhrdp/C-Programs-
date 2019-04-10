#include<iostream>
#include<conio.h>
using namespace std;
class student
{      
      int m;
           public:
                  student(int n1)
                           {
                            cout<<"sim";
                            if(n1%2==0)
                           m=0;
                           else
                           m=1;
                           }
                           
                           student(student &s)
                                {
                                          if(s.m==0)
                                          cout<<"even";
                                          else
                                          cout<<"odd";
                                          }
             };
  main()
           {
             student s1(8);
             student s2(7);
             student s3(s1);
             student s4(s2);
             
             getch();
               }          
                       
