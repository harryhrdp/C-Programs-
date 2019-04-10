#include<iostream.h>
#include<conio.h>
#include<fstream.h>
main()
{
      ifstream lif;
      char ch[20],uch;
      lif.open("rem.txt");
                     
                     
                                      lif.getline(ch,20);
                                     
                                      cout<<ch;
                                      
                                      
                     lif.close();
                   //  f1.close();
                     getch();
                     } 
