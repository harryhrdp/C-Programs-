#include<iostream>
#include<conio.h>
using namespace std;
class person
{
	char name[30];
	int age;
	public:
		void getdata();
		void display();
};
void person::getdata()
{
	cout<<"Enter name:"<<endl;
	cin>>name;
	cout<<"Enter age:"<<endl;
	cin>>age;
}
void person::display()
{
	cout<<"\n Name:"<<name;
	cout<<"\n Age:"<<age;
}
int main()
{
	person p;
	p.getdata();
	p.display();
	return 0;
	getch();
}
