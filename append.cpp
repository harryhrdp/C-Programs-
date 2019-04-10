#include<iostream>
#include<conio.h>
#include<fstream>
#include<iomanip>
using namespace std;
main()
{
      ofstream f;
      char ch[50];
      f.open("abc.txt",ios::app);
      cin>>ch;
      f<<ch;
      f.close();
      ifstream f1;
      f1.open("abc.txt", ios::in);
      f1>>ch;
      cout<<ch;
      f1.close();
      getch();
     } 
