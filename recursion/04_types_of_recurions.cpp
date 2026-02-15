// 1. Tail recursion
// 2. Head recursion
// 3. Tree recursion
// 4. Indirect recursion
// 5. Nested recursion

#include <iostream>
using namespace std;

// 1. Tails Recursion :- if recursive call last statement in a fn.
// after that call ther should be nothign
// In tail recursion all the operating perform at calling time only
// not on return time.
// same fn with loop -> tail recursion can easily converted as form of loop.
// time taken by both of then in same O(n), but recursion use stack so space
// complaxit of recursion in O(N) but for loop that is O(1)

// void fn(n)
// {
//     while (n > 0)
//     {
//         cout << n << endl;
//         n--;
//     }
// }
void tail(int n)
{
    if (n > 0)
    {
        cout << n << endl;
        tail(n - 1);
    }
}

// opposite of tail
// no statement or no operation before thr fn call.
void head(int n)
{
    if (n > 0)
    {
        head(n - 1);
        cout << n << endl;
    }
}

// Linear recursion
// A recursive fn that in calling one time
void linear(int n)
{
    if (n > 0)
    {
        //.....
        //.....
        linear(n - 1);
        //.....
        //.....
    }
}

// Tree recusrion.
// A recursive fn that in calling more then one time
// time complaxiy is O(2^n)
// space complaxity (depends on maximum height of the stack) is O(n)
void tree(int n)
{
    if (n > 0)
    {
        //.....
        //.....
        tree(n - 1);
        //.....
        //.....
        tree(n - 1);
        //.....
        //.....
    }
}

// Indirect recurions => more then one fn they are calling one another in a circular fashion.
void A(int n)
{
    if (n > 0)
    {
        cout << n << endl;
        B(n - 1);
    }
}

void B(int n)
{
    if (n > 1)
    {
        cout << n << endl;
        A(n / 2);
    }
}

// Nested recursion
int nest(int n)
{
    if (n > 100)
    {
        return n - 10;
    }
    else
    {
        return nest(nest(n + 11));
    }
}

int main()
{
    nest(94);
    return 0;
}