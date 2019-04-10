#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
main()
{
    const int SIZE = 10;
	char firstname[SIZE];
	cout << "Enter your name: ";
	cin >> setw(SIZE) >> firstname;
	cout<<firstname;
	getch();  
	 
     const int SIZE1 = 81;
    char address[SIZE1];
	cout << "Enter your address: ";
	cin.getline(address, SIZE1);
    cout<<address;
    getch();
    
	           
}
