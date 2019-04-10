#include <iostream>
#include <fstream>
#include<conio.h>
using namespace std;

int main () {
  ofstream myfile;
  myfile.open("example.txt");
  if (myfile.is_open())
  {
    myfile << "This is a line.\n";
    myfile << "This is another line.\n";
    myfile.close();
  }
  else 
  cout << "Unable to open file";
  getch();
  //system("pause");
}
