#include<iostream>
#include<conio.h>
using namespace std; 
class Simple 
{ 
        int a;
        public:
        void read()
        {cin>>a;}
        void display()
        {cout<<a;}
        
 }; 
 int main() 
 { 
     Simple obj; 
     Simple* ptr; 
     ptr = &obj; 
     obj.read(); 
    (*ptr).display(); 
     getch(); 
 } 
