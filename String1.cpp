#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
main()
{
      string s2("hello"),s3;
      
      s3=s2;
      string s1("abcdef");
      cout<<"enter first string:  ";
      cout<<s1<<endl;
      s3=s3+s1;
      cout<<"S3 after concat:  ";
      cout<<s3<<endl;
      s1.insert(4, s2);
      cout<<"S1 after insert:  ";
      cout<<s1<<endl;	
      s1.erase(4, 5);
      cout<<"S1 after erase:  ";	
      cout<<s1<<endl;	
      s2.replace(1, 3, s1);
      cout<<"S2 after replace:  ";
      cout<<s2<<endl;
      cout<<"S1 after replace:   ";
      s1.replace(0, 1, s2, 0, 3); 
      cout<<s1;
getch();
}
