#include <iostream>
#include <conio.h>
using namespace std;
int main() 
{
   const int SIZE = 5;
   int * pArray,a;
   pArray = new int[SIZE];  // Allocate array via new[] operator
   
   cout<<"Enter values"<<"\n";
   for (int i = 0; i < SIZE; i++) 
   {  
       cin>>a;
      *(pArray + i) = a;
   }
    cout<<"\n";
    cout<<"\nValues entered are"<<"\n";
    for (int i = 0; i < SIZE; i++) 
   {
    cout << *(pArray + i) << "\n";
   }
   delete [] pArray;
   
   cout<<"\n";
   for (int i = 0; i < SIZE; i++) 
   {
    cout << *(pArray + i) << "\n";
   }
   getch();
   }
