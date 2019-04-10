#include<iostream>
#include<conio.h>
using namespace std; 
int main() 
{
 int num;
 x:
 cout<<"Enter a positive number";
 cin>>num;   
 if(num<0)
 goto x;
 else
 if (num%2==0)
 cout<<"Number entered is even"; 
 else
 cout<<"Number entered is odd";
 getch();
}
