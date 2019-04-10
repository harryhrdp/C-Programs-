#include <fstream.h>
#include <iostream.h>
#include <stdlib.h>
#include<conio.h>
int main()
{ 
    ofstream out;
    char data[25],ch;
    
    out.open("text.txt",ios::out);
    cout<<"Enter the text";
    cin.getline(data,25);
    out<<data;
    out.close();
    ifstream in;
    in.open("text.txt",ios::in);
    cout<<endl<<"Contents of the file are \n";
    int r;
    
    while(in.eof()==0)
    {                 
                      r=in.tellg();
                      cout<<r<<endl;
                      
                      ch=in.get();
                      cout<<ch<<endl;
    }
    system("pause");
    }
