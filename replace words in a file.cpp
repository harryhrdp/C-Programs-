#include <fstream.h>
#include <iostream.h>
#include <stdlib.h>
#include<conio.h>
int main()
{ 
    ofstream out;
    char data[25];
    int p;
    out.open("text.txt",ios::out);
    cout<<"Enter the text: ";
    cin.getline(data,25);
    out<<data;
    out.seekp(0,ios::beg);
    p=out.tellp();
    cout<<"\nPosition of put pointer: "<<p<<endl;
    cout<<"\nEneter text to replace the first word: ";
    cin.getline(data,25);
    out<<data;
    out.close();
    ifstream in;
    in.open("text.txt",ios::in);
    cout<<"\nContents of the file are: ";
    while(in.eof()==0)
    {
       in>>data;
       cout<<data;
    }
    cout<<endl<<endl;
    system("pause");
   }
