#include <bits/stdc++.h>
using namespace std;

// n! => 1 * 2 * 3 * 4 * (n-1) * n
int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return factorial(n - 1) * n;
};

int main()
{
    cout << factorial(4) << endl;
    return 0;
}