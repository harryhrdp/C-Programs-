#include<conio.h>
#include<iostream.h>
main()
{
      char a[10],*p;
      int i;
      cin>>a;
      p=a;
      while(*p!='\0')
      {
                  cout<<*p<<"  ";
                  cout<<char(*p-32);
                  cout<<" Value = "<<(*p-32)<<endl;
                  p++;
                  }
                  getch();
                  }
