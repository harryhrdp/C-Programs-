#include<iostream>
#include<map>
#include<string>
#include<conio.h>
using namespace std;
typedef map<string,int>phoneMap;
int main()
{
	string name;
	int number;
	phoneMap phone;
	cout<<"Enter three sets of name and number\n";
	for(int i=0;i<3;i++)
	{
		cin>>name;
		cin>>number;
		phone[name]=number;
	}
	phone["Jacob"]=4444;
	phone.insert(pair<string,int>("Bose",5555));
	int n=phone.size();
	cout<<"\n Size of Map:"<<n<<"\n\n";
	cout<<"List of telephone numbers\n";
	phoneMap::iterator p;
	for(p=phone.begin();p!=phone.end();p++)
	{
		cout<<(*p).first<<" "<<(*p).second<<"\n";
	}
	cout<<"\n";
	cout<<"Enter name:";
	cin>>name;
	number=phone[name];
	cout<<"Number:"<<number<<"\n";
	p=phone.find("Jacob");
	cout<<"\nFinding Number with find():-"<<(*p).second;
	cout<<"\n Size before erasing:"<<phone.size();
	phone.erase(p);
	cout<<"\n Size after erasing"<<phone.size();
	for(p=phone.begin();p!=phone.end();p++)
	{
		cout<<(*p).first<<" "<<(*p).second<<"\n";
	}
	getch();
}
