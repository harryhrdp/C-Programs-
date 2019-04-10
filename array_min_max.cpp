#include <iostream>
#include<conio.h>
using namespace std;
int main ()
{
int min,max,i;
const int Numb = 10;
int a[Numb]; //10 elements
cout<<"Enter 10 values:"; //prompts user for 10 values.
for(i=0;i<10;i++)
{
cout<< "\nEnter value: ";
cin>> a[i]; // puts values in array
}

min=a[0];
max=a[0];
for(i=0;i<10;i++)
	{
		if(min>a[i])
		{
			min=a[i];
		}
		if(max<a[i])
		{
			max = a[i];
		}
	}

cout<<"Maximum number is: "<< max << endl;
cout<<"Minimum number is: "<< min << endl;

getch();
return 0;

}
