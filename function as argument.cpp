#include<iostream.h>
#include<conio.h>
    void test(int a, int b)
    {
       cout<<a+b;
    }
void function1(void (*test)(int,int))
{
    test(8,9);
}
 main ()
{
    function1(&test);
   getch();
}
