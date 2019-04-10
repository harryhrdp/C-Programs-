#include <fstream.h>
#include <iostream.h>
#include <stdlib.h>
#include<conio.h>
int main()
{  ifstream in_stream;
  ofstream out_stream;
  int num;
  in_stream.open("square.txt");
  if (in_stream.fail()) { cout << "Input file could not be opened.\n";
  system("pause");
    exit(1);  } 
  out_stream.open("squares.txt");
  if (out_stream.fail()) {  cout <<"Output file could not opened.\n";
    exit(1);  }
  in_stream >> num;
  cout<<num;
 out_stream << "The square of " << num << " is " <<num*num;
  in_stream.close();
  out_stream.close();
  system("pause");
}
