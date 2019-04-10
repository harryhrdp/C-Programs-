#include <iostream>
#include <conio.h>
using namespace std;
main()
{
int p;
cout<<"Before a bad input operation: \n";
cout<<"-----------------------------\n";
cout<<" cin.rdstate(): "<<cin.rdstate();
cout<<"\n cin.eof(): "<<cin.eof();
cout<<"\n cin.fail(): "<<cin.fail();
cout<<"\n cin.bad(): "<<cin.bad();
cout<<"\n cin.good(): "<<cin.good();
cout<<"\n\nEnter a character (should be integer): "<<endl;
cin>>p;
cout<<"After a bad input operation: \n";
cout<<"----------------------------\n";
cout<<" cin.rdstate(): "<<cin.rdstate();
cout<<"\n cin.eof(): "<<cin.eof();
cout<<"\n cin.fail(): "<<cin.fail();
cout<<"\n cin.bad(): "<<cin.bad();
cout<<"\n cin.good(): "<<cin.good()<<"\n\n";
cin.clear();
cout<<"After cin.clear()\n";
cout<<"-----------------\n";
cout<<"cin.fail(): "<<cin.fail()<<endl;
getch();
}
