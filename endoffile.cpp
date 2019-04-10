#include <fstream.h>
#include <iostream.h>
#include <stdlib.h>
#include<conio.h>
int main()
{ 
    char data[5],c;
    ofstream outf("abc.txt");
    cin>>data;
    outf<<data;
    outf.close();
    ifstream in("abc.txt");
    
                  while(in.eof()==0)
                  {
                   c=in.get();
                   cout<<c;
                   }
                   getch();
                   }
