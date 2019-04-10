#include <iostream>
#include <stack>
#include<conio.h>
using namespace std;
int main ()
{
    stack <string> cards; /* Simple enough to create a stack */
    cards.push("Value 1"); /* push() will add a value, think of queues */
    cards.push("Value 2");  /* adding some cards to the deck */
    cards.push("Value 3");
    cards.push("Value 4");
    cout << "There are " << cards.size () << " values in the collection" << endl;
    cout << "The value on the top is " << cards.top() << endl;
    /* Will output King of Spades, since this was the last one to be added */
    cards.pop();
    cout << "The top value is now " << cards.top() << endl;
    getch();
}
