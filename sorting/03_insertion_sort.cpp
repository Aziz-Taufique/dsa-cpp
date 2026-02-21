#include <bits/stdc++.h>
using namespace std;

// TC = O(n^2) in worst case.
// tc = O(n) in best case.
// SC = O(1)

void insertionSort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 1; i < n; i++)
    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            swap(arr[j], arr[j - 1]);
            j--;
        }
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
    insertionSort(arr);
    cout << "Print after sort : ";
    printArr(arr);
    return 0;
}