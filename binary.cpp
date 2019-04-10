#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<iomanip.h>
main()
{
      ofstream f;
      int r;char ch[50];
      f.open("rah",ios::binary);
      cin>>r>>ch;
      f<<r<<ch;
      f.close();
      ifstream f1;
      f1.open("rah",ios::binary);
      f1>>r>>ch;
      cout<<r<<ch;
      f1.close();
      getch();
     } 
