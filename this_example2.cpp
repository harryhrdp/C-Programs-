#include<iostream>
#include<cstring>
#include<conio.h>
using namespace std;
class person
{
	char name[20];
	float age;
	public:
		person(char *s,float a)
		{
			strcpy(name,s);
			age=a;
		}
    person greater(person x)
    {
    	if(x.age>age)
    	return x;
    	else
    	return *this;
    }
    void display(void)
    {
    	cout<<"Name:"<<name<<"\n";
    	cout<<"Age:"<<age<<"\n";
    }
};
int main()
{
	person p1("John",37.50),p2("Anil",29.0),p3("Suresh",40.25);
	person p=p1.greater(p3);
	cout<<"Elder person is:\n";
	p.display();
	p=p1.greater(p2);
	cout<<"Elder person is:\n";
	p.display();
	getch();
	return 0;
}
