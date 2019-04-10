#include<iostream>
#include<conio.h>
using namespace std;
class complex
{
	float x;
	float y;
	public:
		complex()
		{
			
		}
		complex(float real,float imag)
		{
			x=real;
			y=imag;
		}
	    friend complex operator+(complex,complex);
		void display(void);
};
complex operator+(complex a,complex b)
{
	complex temp;
	temp.x=a.x+b.x;
	temp.y=a.y+b.y;
	return(temp);
}
void complex::display(void)
{
	cout<<x<<" +j"<<y<<"\n";
}
int main()
{
	complex C1,C2,C3;
	C1=complex(2.5,3.5);
	C2=complex(1.6,2.7);
	C3=C1+C2;
	cout<<"C1= ";
	C1.display();
	cout<<"C2= ";
	C2.display();
	cout<<"C3= ";
	C3.display();
	getch();
}
