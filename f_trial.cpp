#include <fstream.h>
#include <iostream.h>
#include <conio.h>
int main()
{
      char data[25],d;
      ofstream out("simmi.txt");
      cout<<"Enter data"<<endl;
      cin.get(data,25);
      out<<data;
      out.close();
      out.open("simmi.txt", ios::app);
      cout<<"Again reenter data";
      cin.get(data,25,'2');
      out<<data;
      out.close();
      ifstream in;
      in.open("simmi.txt");
      cout<<"Contents of file are";
      //while (in.eof()==0) //while(in)
      //{
           in>>data;
           cout<<data;
      //}
      in.close();
         getch();
      }
