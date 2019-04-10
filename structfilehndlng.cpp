#include<iostream.h>
#include<conio.h>
#include<fstream.h>
struct stu
{
      int r_no;
      char name[5];
      float height;
      };
main()
     {
       stu s[5];
       int n;
       cin>>n;
       ofstream outf("raja.txt", ios::binary);
       for(int i=0;i<n;i++)
      {
      cout<<"Enter Rollno:-";
      cin>>s[i].r_no;
      cout<<"Enter Name:-";
      cin>>s[i].name;
      cout<<"Enter Height:-";
      cin>>s[i].height;
      }
      outf.write((char*)&s, sizeof(s));
      outf.close();
      
      ifstream inf("raja.txt", ios::binary);
      inf.read((char*)&s,sizeof(s));
      for(int i=0;i<n;i++)
      {
      cout<<s[i].r_no<<" "<<s[i].name<<" "<<s[i].height;
      }
      inf.seekg(0,ios::beg);
      inf.read((char*)&s,sizeof(s));
      cout<<s.r_no<<" "<<s.name<<" "<<s.height;
      inf.close();
      getch();
      }
                             
