#include <fstream.h>
#include <iostream.h>
#include <stdlib.h>
#include<conio.h>
int main()
{ 
    char data[25],c;
    fstream out;
    out.open("text.txt",ios::out);
    cout<<"\n eneter the text"<<endl;
    cin.getline(data,25);
    out<<data;
    out.close();

    out.open("text.txt",ios::in);
    cout<<"Contents of the files are \n";
               out>>data;
                      cout<<data<<endl;
    out.close();
    out.open("text.txt",ios::in);
    while(out.eof()==0)
    {
                   c=out.get();
                   cout<<c;
    }
                  getch();
                      }
