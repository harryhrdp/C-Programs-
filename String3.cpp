#include <iostream>
#include <string>
#include<conio.h>
using namespace std;
int main ()
{
  string str1 ("green apple");
  string str2 ("red apple");
  int x=str1.compare(str2);
  cout<<x<<endl;
  x=str2.compare(str1);
  cout<<x<<endl;
  if (str1.compare(str2) != 0)
    cout << str1 << " is not " << str2 << '\n';

  if (str1.compare(6,5,"apple") == 0)
  cout << "equal";

  if (str2.compare(str2.size()-5,5,"apple") == 0)
    cout << "equal\n";

  if (str1.compare(6,5,str2,4,5) == 0)
    cout << "therefore, both are apples\n";
    str1.swap(str2);
    cout<<str1<<endl;
    cout<<str2;
getch();
  }
