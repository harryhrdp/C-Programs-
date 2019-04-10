#include<iostream>
#include<vector>
#include<conio.h>
using namespace std;
void display(vector<int> &v)
{	for(int i=0;i<v.size();i++)
	cout<<v[i]<<endl;
}
main()
{
vector<int> v;
int x,i;
for(i=0; i<5;i++)
{ cin>>x;
v.push_back(x);
}
display(v);
cout<<endl;
cout<<"next operation"<<endl;
v.push_back(6);// add more 		//value in vector
display(v);
cout<<endl;
cout<<"next operation"<<endl;

//inserting elements
vector<int> :: iterator itr=v.begin();
itr=itr+3;
v.insert(itr,9);
display(v);
cout<<endl;
cout<<"next operation"<<endl;

v.erase(v.begin()+3);
display(v);
getch();
}
