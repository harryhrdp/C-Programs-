#include <fstream.h>
#include <iostream.h>
#include <stdlib.h>
#include<conio.h>
int main()
{  ifstream in_stream;
  ofstream out_stream;
  int num,num2,i;
  cout<<"eneter the value of table u want to print in file";
  cin>>num;
  out_stream.open("table.txt");
  if (out_stream.fail()) { cout << "Input file could not be opened.\n";
    exit(0);  }
    out_stream<<num;
    out_stream.close();
    
  in_stream.open("table.txt");
  if (in_stream.fail()) { cout << "Input file could not be opened.\n";
    exit(1);  }
    in_stream>>num2;
    cout<<num2;
    in_stream.close();
    
 out_stream.open("table1.txt");
  if (out_stream.fail()) { cout << "Input file could not be opened.\n";
    exit(1);  }
    for(i=1;i<=10;i++)
    {
    out_stream<<num2<<"*"<<i<<"="<<num2*i<<endl;
}
    out_stream.close();
    system("pause");
} 
