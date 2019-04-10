#include <fstream.h>
#include <iostream.h>
#include <stdlib.h>
#include<conio.h>
int main()
{ 
    char fname[10],data[5],c;
    cout<<"enter the file name";
    cin>>fname;
    ofstream outf(fname);
    cin>>data;
    outf<<data;
    outf.close();
    ifstream in(fname);
   // in.open();
    
    if(!in)
    {
           cout<<"file not open";
           
           exit(0);
           }
    while(in.eof()==0)
    {
                   c=in.get();
                   cout<<c;
                   }
                   getch();
                   }
