#include<iostream.h>
#include<conio.h>
#include<fstream.h>
main()
{
      fstream f;
      char c, line[10];
      f.open("hny.txt", ios::out);
      cin.get(line,20);// f>>line;
      f<<line;
      f.close();
      f.open("hny.txt", ios::in);
                f.get(line,20);
            cout<<line;
            
      f.close();
      getch();
      }
