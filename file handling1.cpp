#include <fstream.h>
#include <iostream.h>
#include <stdlib.h>
#include<conio.h>
int main()
{
    int num,num2;
    ifstream in;
    cout<<"enter the no";
    cin>>num;
    ofstream out("stu.txt");
    out<<num;
    out.close();
    
    in.open("stu.txt");
    if (in.fail())
    {
    cout << "Input file could not be opened.\n";
    getch();
    exit(1);  
    }
    in>>num2;
    cout<<num2;
    in.close();
    system("pause");
    getch();
    }
