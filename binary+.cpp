// This example illustrates overloading the plus (+) operator.
 
#include <iostream>
#include<conio.h>
using namespace std;
class complx
{
      double real,imag;
public:
       void display()
       {
            cout<<real<<endl<<imag<<endl;
            }
      complx( double  , double ); // constructor
      void operator+(int ) ;       // operator+()
};
complx::complx( double r, double i )
{
      real = r; imag = i;
}
void complx::operator+ ( int z) 
{      
      real = (real + z);
      imag = (imag + z);
      cout<<endl<<real<<endl<<imag<<endl;
    }
main() 
{ 
     complx x(4,8);     
     x + 10; // calls complx::operator+() 
     x.display();
     getch();
     } 
