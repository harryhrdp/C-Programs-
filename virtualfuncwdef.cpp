#include<iostream>
#include<conio.h>
using namespace std;
class base //Abstract base class 
{ public:  
virtual void show() = 0; //Pure Virtual Function 
}; 
void base :: show() //Pure Virtual definition 
{ cout << "Pure Virtual definition\n"; } 

class derived : public base 
{ 
      public: 
void show() 
{ 
     base::show();
     cout << "Implementation of Virtual Function in Derived class"; }
 };
 int main() 
{ base *b;
derived d; 
b = &d;
b->show(); 
getch();
}

