//Pure Virtual Function(Do-Nothing function)
#include<iostream>
#include<conio.h>
#include<cstring>
using namespace std;
class Balagurusamy
{
	public:
		virtual void example()=0;
};
class C:public Balagurusamy
{
	public:
		void example()
		{
         cout<<"C text book written by Balagurusamy";
		}
} ;
class oops:public Balagurusamy
{
	public:
		void example()
		{
			cout<<"\nC++ text book written by Balagurusamy";
		}
};
int main()
{
	Balagurusamy* arra[2];
	//Balagurusamy k;
	C e1;
	oops e2;
	arra[0]=&e1;
	arra[1]=&e2;
	arra[0]->example();
	arra[1]->example();
	getch();
	return 0;
}

