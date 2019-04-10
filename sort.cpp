// sort.cpp
// sorts an array of integers
#include <iostream>
#include <conio.h>
#include <algorithm>
using namespace std;
                               // array of numbers
int arr[] = {45, 2, 22, -17, 0, -30, 25, 55};

int main()
   {
   sort(arr, arr+5);           // sort the numbers

   for(int j=0; j<8; j++)      // display sorted array
      cout << arr[j] << ' ';
   cout << endl;
    getch();
   return 0;
   }
