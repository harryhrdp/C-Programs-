#include<iostream>
#include<conio.h>
#include<cstring>
using namespace std;
class media
{
	protected:
		char title[50];
		float price;
		public:
			media(char *s,float a)
			{
				strcpy(title,s);
				price=a;
			}
			virtual void display(){};
			
};
class book:public media
{
	int pages;
	public:
		book(char *s,float a,int p):media(s,a)
		{
			pages=p;
		}
		void display();
};
class tape:public media
{
	float time;
	public:
		tape(char *s,float a,float t):media(s,a)
		{
			time=t;
		}
		void display();
};
void book::display()
{
	cout<<"\n Title:"<<title;
	cout<<"\n Pages:"<<pages;
	cout<<"\n Price:"<<price;
}
void tape::display()
{
	cout<<"\n Title="<<title;
	cout<<"\n play time:"<<time<<"mins";
	cout<<"\n price:"<<price;
}
int main()
{
	char *title=new char[30];
	float price,time;
	int pages;
	//Book Details
	cout<<"\n Enter Book Details\n";
	cout<<"Title:";
	cin>>title;
	cout<<"Price:";
	cin>>price;
	cout<<"Pages:";
	cin>>pages;
	book book1(title,price,pages);
	//Tape Details
	cout<<"\n Enter Tape Details\n";
	cout<<"Title:";
	cin>>title;
	cout<<"Price:";
	cin>>price;
	cout<<"Play time (mins):";
	cin>>time;
	tape tape1(title,price,time);
	media* list[2];
	list[0]=&book1;
	list[1]=&tape1;
	cout<<"\n Media Details";
	cout<<"\n.....Book.....";
	list[0]->display();
	cout<<"\n.......Tape......";
	list[1]->display();
	getch();
	return 0;
}
