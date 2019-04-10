#include<iostream.h>
#include<conio.h>
#include<fstream.h>
class student
{
      int m;
      char n[5];
      public:
             void get()
             {
                  if(m>5)
                  cout<<n;
                  }
                  };
main()
{
      student s1[5];
      ifstream f("ty.txt");
      int i;
      for(i=0;i<5;i++)
      {
      s1[i].get();
      }
      cout<<sizeof(s1);
      f.read((char*)&s1,sizeof(s1));
      f.close();
      getch();
      }
      
      
