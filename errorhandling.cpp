#include <iostream>
#include <fstream>
#include<conio.h>
using namespace std;

int main () 
{
    ifstream in;
    string line;
    in.open("example.txt");
    if(!in)
    cout<<"file not found"<<endl;
    else
    cout<<"\nError state="<<in.rdstate();
    
    cout<<"\nGood="<<in.good()<<endl;
    cout<<"\nFail="<<in.fail();
    cout<<"\ndata in file is:- ";
    while ( in.good() )
    {
    getline (in,line);
    cout << line;
    }
    cout<<"\nEof="<<in.eof();
    cout<<"\nFail="<<in.fail();
    cout<<"\nBad="<<in.bad();
    in.close();
    getch();
}
