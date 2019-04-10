#include <fstream.h>
#include <iostream.h>
#include <stdlib.h>
#include<conio.h>
int main()
{ 
    ofstream out;
    char data[25],ch;
    out.open("abc.txt",ios::out);
    cout<<"Enter the text";
    cin.get(data,25);
    out<<data;
    out.close();
    ifstream in;
    in.open("abc.txt",ios::in);
    in.seekg(2,ios::beg);
    int m=in.tellg();
    cout<<"Position: "<<m<<endl;
    in>>ch;
    cout<<"Value: "<<ch<<endl;
    system("pause");
}
