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
                             ifstream out("raman.txt");
                                
                             out.read((char*)&s1,sizeof(s1));
                             s1.put();
                             out.close();
                             getch();
                          }
                                
