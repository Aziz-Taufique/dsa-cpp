#include <iostream>
using namespace std;

// tc = O(n)
// sc = O(n)
int sum(int n)
{
    if (n == 0)
        return 0;
    return sum(n - 1) + n;
}

// tc = O(1)
// sc = O(1)
int sum2(int n)
{
    return (n * (n + 1)) / 2;
}

// tc = O(n)
// sc = O(1)
int sum3(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
        sum += i;
    return sum;
}

int main()
{
    int n = 5;
    int totalSum = sum3(n);
    cout << totalSum << endl;
}