#include<iostream.h>
#include<conio.h>
#include<fstream.h>
main()
{
      istream f;
      int r;char ch[50];
      f.open("rem.txt");
      if(f.fail())
      {
                  cout<<"file not exist";
                  }
                  else
                  {
                     cin>>r>>ch;
                     f<<r<<ch;
                     }
                     f.close();
                     ifstream lif;
                     lif.open("rem.txt");
                     lif>>r>>ch;
                     cout<<r;
                     cout.putline(ch,10);
                     lif.close();
                     getch();
                     } 
