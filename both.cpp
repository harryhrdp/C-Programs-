#include<iostream.h>
#include<conio.h>
#include<fstream.h>
main()
{
      fstream f;
      char c, line[10];
      f.open("hny.txt", ios::out);
    cin.get(line,10);// f>>line;
      f<<line;
      f.close();
      f.open("hny.txt", ios::in);
     while (f.eof()==0) //while(f)
      {
           c= f.get();
            cout<<c;
            }
      f.close();
      getch();
      }
