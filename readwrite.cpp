#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdlib.h>

main()
{
      ifstream f("hf.txt");
      char line[10];
      
     cin.getline(line,10, '@');
      cout.putline(line);
      f<<line;
    /* while (f)
      {
            f.get(c);
            cout<<c;
            }*/
      f.close();
      getch();
      }
