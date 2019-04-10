#include<iostream>
#include<conio.h>
using namespace std;
class BC
{
	public:
		int b;
		void show()
		{
			cout<<"b="<<b<<"\n";
		}
};
class DC:public BC
{
	public:
		int d;
		void show()
		{
			cout<<"b="<<b<<"\n"<<"d="<<d<<"\n";
		}
};
int main()
{
	BC *bptr;
	BC base;
	bptr=&base;
	bptr->b=100;
	cout<<"bptr points to base objects\n";
	bptr->show();
	//derived class
	DC derived;
	bptr=&derived;
	bptr->b=200;
	/* bptr->d=300; */   //Won't Work
	cout<<"bptr now points to derived objects\n";
	bptr->show(); //bptr now points to derived object
    /*accessing d using a pointer of type derived class DC*/
    DC *dptr;    //derived type pointer
    dptr=&derived;
    dptr->d=300;
    cout<<"dptr is derived type pointer\n";
    dptr->show();
    cout<<"using ((DC*)bptr)\n";
    ((DC*)bptr)->d=400;
    ((DC*)bptr)->show();
    getch();
    return 0;
}
