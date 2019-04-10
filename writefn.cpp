#include<fstream.h>
#include<iostream.h>
#include<conio.h>
class s
{
      private:
      int r_no;
      char n[20];
      char a[20];
           public:
           void get()
                     {
                      cin>>r_no;
                      cin>>n;
                      cin>>a;
                     }
           void display()
           {
                cout<<r_no;
                cout<<n;
                cout<<a;
            }
                      };
                          main()
                          {
                             class s s1;
                             ifstream in;
                             ofstream out;
                             out.open("raman.txt",ios::out);
                             s1.get();
                             out.write((char*)&s1,sizeof(s1));
                             out.close();
                             in.open("raman.txt",ios::in);
                             in.read((char*)&s1,sizeof(s1));
                             s1.display();
                             out.close();
                             getch();
                          }
                                
