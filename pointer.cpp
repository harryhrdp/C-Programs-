#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int x;
	int *ptr;
	x = 10;
	ptr = &x;
	*ptr = *ptr + 1;
	cout<< x;
getch();
}
