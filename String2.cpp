#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
main()
{
string a = "Robert"; 
string b = "is not"; 
char *c = "superb";
char d = 'd'; 
a.append(b); /* a is “Robert is not ” */ 
cout<<a<<endl;
a ="Robert"; 
a.append(b, 0, 3); /* a is “Robert is ” */ 
cout<<a<<endl;
a.append(c,6); /* a is “Robert is superb” */ 
cout<<a<<endl;
a = "Robert"; 
a.append(5, d); /* a is “Robertddddd” */
cout<<a<<endl;
getch();
}
