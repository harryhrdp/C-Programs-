#include<fstream>
#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
class student
{
                char name[10];
                int rno;
      public:
             void getdata()
             {
             
             cout<<"Enter name";
             cin.get();
			 cin.getline(name,8);
             cout<<"Enter rollno";
             cin>>rno;
             }
             void showdata()
             {
             cout<<"Name:- "<<name<<endl;
             cout<<"Rollno:- "<<rno;
             }};
             int main()
             {
                  student std;
                  fstream file;
                  file.open("result.txt",ios::out);
                  for(int i=1;i<=5;i++)
                  {
                  cout<<"Enter the record"<<endl;
                  std.getdata();
                  file.write((char*)&std,sizeof(std));
                  }
                  file.close();
                  file.open("result.txt",ios::in);
                  file.seekg(0,ios::end);
                  int length=file.tellg();
                  int n=length/(sizeof(std));
                  cout<<"Total Records in File are:- "<<n;
                  cout<<"Enter which record you want to read:-";
                  int m;
                  cin>>m;
                  int position=(m-1)*sizeof(std);
                  file.seekg(position);
                  file.read((char*)&std,sizeof(std));
                  std.showdata();
                  getch();
                  }
