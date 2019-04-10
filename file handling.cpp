#include<iostream.h>
#include<conio.h>
#include<fstream.h>
main()
{
      fstream f;
      char c, line[20];
      f.open("hny.txt");
      cin.get(line,40);// f>>line;
      f<<line;
      f.close();
      f.open("hny.txt");
      f>>line;
      cout<<line;
     //while (f.eof()==0) //while(f)
      //{
        //   c= f.get();
          //  cout<<c;
            //}
      f.close();
      getch();
      }
