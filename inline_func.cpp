#include<iostream>
#include<conio.h>
using namespace std;
inline float mul(float x, float y)
{
       return(x*y);
}
inline double div(double p,double q)
{
       return(p/q);
}
int main()
{
 float a=12.345;
 float b=9.82;
 //float c;
 cout<<mul(a,b)<<"\n";
 cout<<div(a,b)<<"\n";
 //c=div(a,b);
 //cout<<c;
 getch();
}
