#include<iostream>
#include<list>
#include<conio.h>
using namespace std;
void display(list<int> &l)
{
list<int>::iterator p;
for(p=l.begin();p!=l.end();p++)
cout<<*p;
}

int main()
{
int i;
list<int> list1;
list<int> list2(5);
for(i=0;i<3;i++)
list1.push_back(i);
cout<<"Elements in List 1:- ";
display(list1);
cout<<endl;
list<int>::iterator p;
for(p=list2.begin();p!=list2.end();p++)
*p=0;
cout<<"Elements in List 2:- ";
display(list2);
cout<<endl;
list1.push_back(1);
cout<<"Elements in List 1 after pushing element from back:- ";
display(list1);
cout<<endl;
list1.pop_front();
cout<<"Elements in List 1 after popping element from front:- ";
display(list1);
cout<<endl;
list1.sort();
cout<<"Elements in List 1 after sorting:- ";
display(list1);
cout<<endl;
list1.merge(list2);
display(list1);
cout<<endl;
list1.reverse();
cout<<"Reversed merged list:- ";
display(list1);
getch();
}
