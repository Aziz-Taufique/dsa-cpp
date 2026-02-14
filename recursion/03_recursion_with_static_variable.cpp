#include <iostream>
using namespace std;

static int x = 0;

int fn(int n)
{
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