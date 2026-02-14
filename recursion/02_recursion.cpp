#include <bits/stdc++.h>
using namespace std;

int fn(int n)
{
    return n;
};

int fn2(int n)
{
    return n;
};

void printNumDesc(int n)
{
    if (n > 0)
    {
        cout << n << endl;   // print ingis done at calling time => 4, 3, 2, 1
        printNumDesc(n - 1); // f(3), f(2), f(1), f(0)
    }

    // suppose nested room [🏠1, buld][🏠2, bulb][🏠3, bulb]
    // switch on builb go to next room
    // form 3 room come out to 2nd and then 1st and out.
}

void backTracking(int n)
{
    if (n > 0)
    {
        backTracking(n - 1); // f(3), f(2), f(1), f(0)
        cout << n << endl;   // printing is done at returning time => 1, 2, 3, 4
    }
    // go to next room
    // switch on bulb.
}

void fun(int n)
{
    // base condition
    // calling (ascending phase)
    // fn() * 2 -> 2 will execute on returning time
    // returning (descending phase)
}

// recursion vs loop
// => loop will have only ascending phase but recursion will
//    have both ascending and descending phase.

void fn()
{
}

int main()
{
    int val = fn(12) * fn2(3);
    printNumDesc(4);
    backTracking(4);
    return 0;
}
