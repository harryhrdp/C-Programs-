#include<iostream.h>
#include<fstream.h>
#include<conio.h>
int main()
{
ofstream outfile;
char fname[10];
cout<<"enter file name ";
cin>>fname;
outfile.open(fname);
outfile<<"File has been created"<<endl;
outfile<<"You can now write data to file";
outfile.close();
getch();
}
