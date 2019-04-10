#include<iostream.h> 
#include<conio.h>
main() 
{
 int year;
 cout<<"Enter the Year that you want to check : ";
 cin>>year;
  
 if(year % 400 == 0)
     cout<<" Leap Year."<< year;
else
     if(year % 100 == 0)
     cout<<"not a Leap Year."<< year; 
    else
         if(year % 4 == 0)
      cout<<" is a Leap Year."<< year;
         else
         cout<<"is not a Leap Year"<< year; 
              getch();
}

