#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
main()
{
    const int SIZE = 81;
    char address[SIZE];
	cout << "Enter your address: ";
	cin.getline(address, SIZE);
    cout<<address;
    getch();
}
