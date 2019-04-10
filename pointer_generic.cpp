#include<iostream>
#include<conio.h>
using namespace std;
int main()
 { 
int i; 
char c;
void *data; 
i = 6; 
c = 'a';
data = &i; 
cout<<"\nthe_data points to the integer value  "<< *(int*) data;
data = &c; 
cout<<"\nthe_data now points to the character "<< *(char*) data; 
getch();
} 
