#include <iostream>
using namespace std;

// static variable has single copy.
// int x = 0; // it will also has single copy

int fn(int n)
{
    static int x = 0;
    if (n > 0)
    {
        x++;
        return fn(n - 1) + x;
    }
    return 0;
}

int main()
{
    int n = 5;
    cout << fn(n) << endl;
    return 0;
}