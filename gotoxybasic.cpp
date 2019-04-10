#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <windows.h>
using namespace std;

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPosition;
void gotoXY(int x, int y); 

int main()
{
   gotoXY(24,10); // Placing title
   cout <<   "gotoXY(x,y) Demonstration..";
getch();
}

void gotoXY(int x, int y) 
{ 
CursorPosition.X = x; // Locates column
CursorPosition.Y = y; // Locates Row
SetConsoleCursorPosition(console,CursorPosition); // Sets position for next thing to be printed 
}
