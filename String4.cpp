#include <iostream>
#include <string>
#include<conio.h>
using namespace std;
int main ()
{
  string str0 ("Test string");
  for (int i=0; i<str0.length(); i++)
  {
    cout << str0.at(i);
  }
  string str="We think in generalities, but we live in details.";
  
  string str2 = str.substr (3,5);     // "think"

  int pos = str.find("live");      // position of "live" in str
  cout<<"\n position of live";
  cout<<pos<<endl;
  string str3 = str.substr (pos);     // get from "live" to the end

  cout << str2 <<endl<< str3 << "\n";
  
  pos= str.find_first_of('e');
  cout<<pos<<endl;
  pos= str.find_last_of('e');
  cout<<pos;
  getch();
}
