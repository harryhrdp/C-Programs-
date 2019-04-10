#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int a = 6;
int *c = &a;
*c = 7;
cout<<a<<" ";
cout<<*c; 
getch();
}
