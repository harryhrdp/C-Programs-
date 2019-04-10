#include<iostream.h>
#include<conio.h>
#include<fstream.h>
class sim
{
      int rollno;
      char name[5];
      public:
             void read1()
             {
                  cin>>rollno>>name;
                  }
                  void display()
                  {
                       cout<<rollno<<" "<<name<<endl;
                       }};
                       main()
                       {
                             sim s1[5],s2[5];
                             ofstream outf("raja.txt", ios::binary);
                             for(int i=0;i<5;i++)
                             {
                             s1[i].read1();
                             outf.write((char*)&s1, sizeof(s1));
                             }
                             outf.close();
                             ifstream inf("raja.txt", ios::binary);
                             for(int i=0;i<5;i++)
                             {
                             inf.read((char*)&s2,sizeof(s2));
                             s2[i].display();
                             }
                             inf.close();
                             getch();
                             }
                             
