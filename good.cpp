#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () 
{
  string line;                        //ifstream myfile;
  ifstream myfile ("example.txt");    //myfile.open("example.txt");
  if (myfile.is_open())
  {
    while ( myfile.good() )
    {
      getline (myfile,in);
      cout << in << endl;
    }
    myfile.close();
  }
  else cout << "Unable to open file"; 
  system("pause");
}
