#include <iostream>      
#include <queue> 
#include<conio.h>
using namespace std;   
     
int main ()
{
  queue <int> q;   // creates an empty queue of integer q 

  q.push(2);   // pushes 2 in the queue  , now front = back = 2
  q.push(3);   // pushes 3 in the queue  , now front = 2 , and back = 3
  q.push(4);
  q.push(5);
  q.pop() ;  // removes 2 from the stack , front = 3
  cout<<"\n Front element of queue is:"<<q.front();
  cout<<"\n Back element of queue is:"<<q.back();
  cout<<"\n Size of queue is:"<<q.size();
getch();
}
