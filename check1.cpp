#include<iostream.h>
#include<conio.h>
#include<fstream.h>
main()
{
      fstream f("raja.txt");
      char c,uch, line[10];
     
      cin.get(line,20);
      f<<line;
      f.close();
      f.open("raja.txt", ios::in);
      while(f)
      {
              c=f.get();
              uch=c+32;
            cout<<uch;
            
      f.close();
      getch();
      }
