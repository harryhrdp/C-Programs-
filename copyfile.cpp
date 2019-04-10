#include<iostream.h>
#include<fstream.h>
#include<conio.h>
int main()
{
ofstream outfile;
ifstream infile;
char ch;
infile.open("abc.txt",ios::in);
outfile.open("abcd.txt",ios::out);
while(infile.eof()==0)
{
ch=infile.get();
outfile.put(ch);
}
infile.close();
outfile.close();
getch();
}
