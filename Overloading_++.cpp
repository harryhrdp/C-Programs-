#include<iostream>
#include<conio.h>
using namespace std;
class increment
{
	int m,n;
	public:
		increment(int x,int y)
		{
			m=x;
			n=y;
		}
		void display()
		{
			cout<<"m="<<m<<" "<<"n="<<n<<endl;
		}
		void operator++(int)
		{
			m++;
			n++;
		}
};
int main()
{
increment in1(20,30);
in1.display();
in1++;
in1.display();
increment in2(1,2);
in2.display();
//in2.operator++();
in2.display();
getch();
return 0;
}

