#include <bits/stdc++.h>
using namespace std;

// TC = O(n^2)
// SC = O(1)

void selectionSort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        int mini = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[mini])
            {
                mini = j;
            }
        }
        swap(arr[i], arr[mini]);
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
    selectionSort(arr);
    cout << "Print after sort : ";
    printArr(arr);
    return 0;
}