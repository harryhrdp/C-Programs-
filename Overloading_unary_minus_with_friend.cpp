#include<iostream>
#include<conio.h>
using namespace std;
class space
{
	int x;
	int y;
	int z;
	public:
		void getdata(int a,int b,int c);
		void display(void);
		friend void operator-(space &s);	
};
void space:: getdata(int a,int b,int c)
{
	x=a;
	y=b;
	z=c;
}
void space::display(void)
{
	cout<<"x="<<x<<" ";
	cout<<"y="<<y<<" ";
	cout<<"z="<<z<<"\n";
}
void operator-(space &s)
{
	s.x=-s.x;
	s.y=-s.y;
	s.z=-s.z;
}
int main()
{
	space S;
	S.getdata(10,-20,30);
	cout<<"S : ";
	S.display();
	-S;
	cout<<"-S : ";
	S.display();
	getch();
	return 0;
}
