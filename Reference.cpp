#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a=100;
	int &b=a;
	int &c=b;
	cout<<b<<endl;
	b=200;
	cout<<a;
	cout<<c;
	getch();
}
