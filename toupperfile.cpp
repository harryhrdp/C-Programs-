#include<iostream.h>
#include<fstream.h>
#include<conio.h>

int main()
{
ofstream outfile;
ifstream infile;
char fname1[10],fname2[10],ch,uch;
cout<<"enter first file name ";
cin>>fname1;
cout<<"enter second file name ";
cin>>fname2;
infile.open(fname1);
outfile.open(fname2);
while(infile.eof()==0)
{
ch=infile.get();
uch=toupper(ch);
outfile.put(uch);
}
infile.close();
outfile.close();
getch();
}
