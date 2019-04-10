#include<iostream>
#include<conio.h>
using namespace std;
class Something
{
public:
    int m_value;
    Something() 
	{ 
	m_value= 0; 
	}
    void resetValue() 
	{  
	m_value = 0; 
	}
    void setValue(int value)
	 { 
	 m_value = value;
	 }
     int getValue() const
	  { 
	 return m_value;
	 //m_value+=1; 
	 //return 0;
	 } // note addition of const keyword after parameter list, but before function body
};
int main()
{
	Something t1;
	 t1.resetValue();
	 t1.setValue(2);
	 int x=t1.getValue();
	 cout<<"Value is:"<<x;
	 getch();
	 return 0;
}
