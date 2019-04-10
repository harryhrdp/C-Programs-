#include <iostream>
#include <string.h>
#include <fstream>

using namespace std;


void skipLines(ifstream& stream, int nLines)
{
    string dummyLine;
    for(int i = 0; i < nLines; ++i)
        getline(stream, dummyLine);
}

int main()
{
ofstream outFile("temp.txt");
ifstream readFile("test.txt");

string readLine;
string search;
string firstName;
string lastName;

cout<<"Enter The Id :: ";
cin>>search;

while(getline(readFile,readLine))
{
    if(readLine == search)
    {
        outFile<<readLine;
        outFile<<endl;

        cout<<"Enter New First Name :: ";
        cin>>firstName;
        cout<<"Enter New Last Name :: ";
        cin>>lastName;

        outFile<<firstName<<endl;
        outFile<<lastName<<endl;
        skipLines(readFile, 2);
    }
    else
    {
        outFile<<readLine<<endl;
    }
}
}
