#include <bits/stdc++.h>
using namespace std;

// TC = O(n^2) in worst case.
// tc = O(n) in best case.
// SC = O(1)

void bubbleSort(vector<int> &arr)
{
    int n = arr.size() - 1;

    for (int i = n; i >= 0; i--)
    {
        bool didSwap = false;
        for (int j = 0; j <= n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                didSwap = true;
            }
        }
        if (!didSwap)
            break;
    }
}

void printArr(vector<int> &arr)
{
    for (auto &it : arr)
    {
        cout << it << " ";
    }
    cout << endl;
}

int main()
{
    int n = 6;
    vector<int> arr = {13, 46, 24, 52, 20, 9};
    cout << "Print before sort : ";
    printArr(arr);
    bubbleSort(arr);
    cout << "Print after sort : ";
    printArr(arr);
    return 0;
}