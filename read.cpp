#include<iostream.h>
#include<conio.h>
#include<fstream.h>
main()
{
      ofstream f;
      char n[10], line[200];
      cin>>n;
      f.open(n);
      cin.getline(line,200,'@');
     // cout<<line;
      f<<line;
      f.close();
      getch();
      }
