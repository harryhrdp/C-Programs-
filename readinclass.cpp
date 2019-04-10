#include<fstream.h>
#include<iostream.h>
#include<conio.h>
class s
{
      private:
              
              char n[10];
              public:
                     void put()
                     {
                          cout<<n;
                          }
                          };
                          main()
                          {
                                s s1;
                             ifstream inf;
                             inf.open("raman.txt",ios::binary);
                             inf.read((char*)&s1,sizeof(s1));
                             s1.put();
                             inf.close();
                             getch();
                          }
                                
