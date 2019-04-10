#include <fstream.h>
#include <iostream.h>
#include <stdlib.h>
#include<conio.h>
int main()
{ 
    ofstream out;
    char data[25];
    out.open("text.txt",ios::out);
    cout<<"Enter the text: ";
    cin.get(data,25);
    out<<data;
    out.close();
     ifstream in;
    in.open("text.txt",ios::in);
    cout<<endl<<"Reverse of the String is: ";
    in.seekg(0,ios::end);
    int m=in.tellg();
    char ch;
    
    for(int i=1;i<=m;i++)
    {
                     in.seekg(-i,ios::end);
                     int z=in.tellg();
                     cout<<"z: "<<z<<endl;
                     cout<<"i: "<<i<<endl;
                     in>>ch;
                     cout<<ch<<endl;
                     }
     
    cout<<endl<<endl;
    system("pause");
}
