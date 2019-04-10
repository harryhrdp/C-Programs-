// This example illustrates overloading operator.
 
#include <iostream.h>
#include<conio.h>
class complx
{
      double real,
             imag;
public:
      
      complx( double r , double i ) // constructor
      {
      real = r; imag = i;        
      }
      
      complx operator*(complx &c)       // operator*()
      {
      
      c.real = (real * c.real);
      c.imag = (imag * c.imag);
      
      cout<<endl<<c.real<<endl<<c.imag;
}     
};

      main() 
{ 
     complx x(4,8);
     complx y(6,8);
     x * y; // calls complx::operator+() 
     getch();
     } 
