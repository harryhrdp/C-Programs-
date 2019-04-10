#include<conio.h>
//#include<vector.h>
#include<iostream.h>
 main()
{
int a[]={11,22,33,44,55,66,77,88};
int *p;
p=std::find(a,a+8,33);
cout<<p<<endl<<a<<endl;
cout<<"33 found at"<<p-a;
getch();

}
